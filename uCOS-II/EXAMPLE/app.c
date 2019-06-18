#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include"ucos_ii.h"
#include"os_cpu.h"
#include"os_cfg.h"

void MyTask(void *pdata);
void Task(void *pdata);

OS_STK MyTaskStack[200];
OS_STK TaskStack[3][200];
int cnt;

int main(void)
{
    cnt = 0;
    OSInit();
    OSTaskCreate(MyTask, (void *)0, &MyTaskStack[199], 1);
    OSStart();
    return 0;
}

void MyTask(void *pdata)
{
    int i = 10;
    int cccc = 0;
    for(i = 10; i < 13; i++) {
        OSTaskCreate(Task, (void *)0, &TaskStack[cccc][199], i);
        cccc++;
    }
    for(;;) {
        OSTimeDly(1000);
    }
}

void Task(void *pdata)
{
    for(;;) {
        cnt++;
        OSTimeDly(3);
    }
}