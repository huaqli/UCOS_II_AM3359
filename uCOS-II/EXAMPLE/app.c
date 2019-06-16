#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include"ucos_ii.h"
#include"os_cpu.h"
#include"os_cfg.h"

OS_STK MyTaskStack[30];
void (*fp)();

void MyTask(void *pdata)
{
    for(;;) {
        OSTimeDly(1);
    }
}

int main(void)
{
    OSInit();
    OSStart();
    return 0;
}
