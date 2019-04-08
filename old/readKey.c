#include<reg51.h>

/*********************************************
 * FuncName:  readKey
 * Functions: 读取P1.0口的状态,为0时返回1.
 * Writer:    54fire
 * Time:      2018-06-11
 *********************************************/
int readKey()
{
    if(0 == P10) //判断按钮是否按下
    {
        delay(50); //消除抖动带来的误判
        if(0 == P10) //再次检查按钮是否按下 
        {
            while(0 == P10); //一直等待按钮抬起
            return 1;
        }
    }
    return 0;
}


void main()
{
    readKey();
}
