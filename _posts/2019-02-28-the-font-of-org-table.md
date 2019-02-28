---
layout:post  
title:Emacs中org-mode的字体设置  
tags：  
- Emacs
- org
- font
categories: Emacs 
---
## 记录org中字体设置

```lisp
;; 设置中文为(微软雅黑)
(dolist (charset '(kana han symbol cjk-misc bopomofo))
  (set-fontset-font (frame-parameter nil 'font)
				              charset
				              (font-spec :family "Microsoft YaHei")))

;; org-mode中table字体设置
(defun set-buffer-variable-pitch ()
  (interactive)
    ;;(variable-pitch-mode t)
    ;;(setq line-spacing 3)
    ;;(set-face-attribute 'org-table nil :inherit 'fixed-pitch)
    ;;(set-face-attribute 'org-table nil :family "KaiTi")
    ;;(set-face-attribute 'org-code nil :inherit 'fixed-pitch)
    ;;(set-face-attribute 'org-block nil :inherit 'fixed-pitch)
    ;;(set-face-attribute 'org-block-background nil :inherit 'fixed-pitch)
    (set-face-attribute 'org-table nil
                        :fontset (create-fontset-from-fontset-spec
                                  (concat "-*-*-*-*-*--*-*-*-*-*-*-fontset-orgtable"
                                          ",han:KaiTi:size=20")))
    )
  (add-hook 'org-mode-hook 'set-buffer-variable-pitch)
```
