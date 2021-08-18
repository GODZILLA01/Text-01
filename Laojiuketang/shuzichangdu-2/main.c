//
//  main.c
//  lx-01
//
//  Created by 张兴超 on 2021/7/8.
//

#include <stdio.h>
int main()
{
//printf控制打印数字的宽度
    printf("**%8d**\n",5);  //%8d意思是数字总长度为8
    printf("**%4d**\n",5);   //%4d意思是数字总长度为4
    printf("**%f**\n",2.5);
    printf("**%0.2f**\n",2.5); //%0.2f意思是小数点后两位保留
    printf("**%8.2f**\n",2.5);  //%8.2f意思是总长度为8且小数点后保留两位 靠右对齐
    printf("**%-8.2f**\n",2.5); //%-8.2f意思是总长度为8且小数点后保留两位 靠左对齐
    return 0;
}
