#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include"ucos_ii.h"
#include"os_cpu.h"
#include"os_cfg.h"

int main(void)
{
    OSInit();
    OSStart();
    return 0;
}
