//
//  main.c
//  C-test
//
//  Created by XUAO on 2017/1/18.
//  Copyright © 2017年 XUAO. All rights reserved.
//

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
    int i;
    for(i=0;i<len;i++)
        printf("%.2x", start[i]);
    printf("\n");
    printf("%d\n", len);
    printf("%.2x\n", *start);
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}


void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x, sizeof(void *));
}



int main(int argc, const char * argv[]) {
    int ival = 0x1234;
    float fval = 0x1234;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
    
    printf("Hello, World!\n");
    return 0;
}


