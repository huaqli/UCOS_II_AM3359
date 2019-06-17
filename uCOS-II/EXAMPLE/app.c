#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include"ucos_ii.h"
#include"os_cpu.h"
#include"os_cfg.h"

OS_STK MyTaskStack[30];

void MyTask(void *pdata)
{
    for(;;) {
        OSTimeDly(1);
    }
}

int main(void)
{
    OSInit();
    //OSTaskCreate(MyTask, (void *)0, &MyTaskStack[29], 10);
    OSStart();
    return 0;
}
