//
//  main.c
//  Cstudy
//
//  Created by 张兴超 on 2021/7/8.
//



#include<stdio.h>
int main()
{
    char ch1,ch2;
    printf("请输入一个字符：");
    ch1=getchar();
    fflush(stdin);   //fflush 清空缓存区
    printf("请输入第二个字符：");
    ch2=getchar();
    printf("您输入的字符是：%c,%c \n",ch1,ch2);
    return 0;
}
