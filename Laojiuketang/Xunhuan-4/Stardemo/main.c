//
//  main.c
//  Stardemo
//
//  Created by 张兴超 on 2021/8/12.
//
//外层循环控制行 内层循环控制列

#include <stdio.h>

int main(int argc, const char * argv[])

{
    int i,j;
    for(i=0;i<4;i++)         //外层循环控制行的变化
    {
        for(j=0;j<=2-i;j++)
       {
           printf(" ");
       }
        for(j=0;j<=i*2;j++)     //内层循环控制列的变化     
        {
            printf("*");
        }
        printf("\n");
    }
                             // 打印星号图形
   
    
    
    o
