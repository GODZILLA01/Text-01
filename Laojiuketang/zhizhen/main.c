//
//  main.c
//  zhizhen
//  Created by 张兴超 on 2021/8/15.
/*
    指针：指针是一个用来存放内存地址的变量（注意指针是变量）
    指针的基本用法： 数据类型*指针变量名；
    例如：int*ptr_num; char*ptr_name; float*money_ptr
    注意：在头文件<stdio.h>中，NULL被定义为常量int*ptr_num=NULL;
    意思是指针的初值设为空，表示指针不指向任何地址。
    此外指针也有地址要定义新的指针存放指针的地址时是两个星号**
*/
    //%d打印整形 %s打印字符串 %p打印一个指针占位符 %x是十六进制占位符 %f浮点型占位符
/*
   1、指针就是一个变量，用来存放另一个变量的地址。赋值给指针必须用取地址符 & 如
 int *ptr_num;
 ptr_num = &num;
      *ptr_num =>num 这两种写法是一模一样的 都是指的空间的变量值。
 
   2、ptr_num2=ptr_num1; 表示两个指针都指向同一个内存，地址相同。
   3、指针可以存放c语言中任何基本数据类型、数组和其他所有高级数据结构。但类型要统一
 */
#include <stdio.h>
/*
int main(int argc, const char * argv[])
{
    int num=9;
    int *ptr_num=&num;            //把地址赋值给指针
    int **ptr_num2 = &ptr_num;    //难理解的点 注意区别这个是两颗星
    //指针也有地址这个步操作是将把指针的地址赋值给一个新的指针
    printf("num的地址是：%p\t",ptr_num);
    *ptr_num=111;          //使用指针修改地址空间里的值（即把空间里的9改为了111）
    printf("*ptr_num的值：%d\n",*ptr_num);   //星号是取值的意思（取空间的变量值）
    printf("原空间num对应的值是：%d\n",**ptr_num2); //注意这里是两颗星 返回原空间
    return 0;
}
*/


//指针使用实例1：
//****************************************************************************************************
/*
int main()
{
    int num=1024; //整形变量
    int *ptr_num; //整型指针变量
    //取num的地址赋值给ptr_num变量
    ptr_num = &num;
    printf("num的值为：%d\n",num);
    printf("num的内存地址为：%p\n",&num);
    printf("ptr_num的值为：%p\n",ptr_num);
    printf("ptr_num的内存地址为：%p\n",&ptr_num);   //指针也有地址！！！
    printf("*ptr_num指向的值为：%d\n",*ptr_num);
}
*/
//指针使用实例2：
int main()
{
    int num1=1024;
    int num2=2048;
    int *ptr1,*ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("num1的值是%d\t num1的地址是：%p\n",num1,ptr1);
    printf("num2的值是%d\t num2的地址是：%p\n",num2,ptr2);
    *ptr2 = *ptr1;                                      // 等价于ptr2= ptr1；
    printf("重新赋值后：\n");
    printf("num2的值是%d\t num2的地址是：%p\n",num2,ptr2);  //值变了，地址没变。
    ptr2 = ptr1;                                        //注意区别
    //将指针1 赋给指针2 此时指针1、2同时指向一个空间变量 此时空间变量的地址是相同的
    printf("重新赋值后：\n");
    printf("num1的值是%d\t num1的地址是：%p\n",num1,ptr1);
    printf("num2的值是%d\t num2的地址是：%p\n",num2,ptr2);
    *ptr2 = 11111;
    printf("重新赋值后：\n");
    printf("num1的值是%d\t num1的地址是：%p\n",num1,ptr1);
    printf("num2的值是%d\t num2的地址是：%p\n",num2,ptr2);
}


//**************************************************************************************************************
//指针和数组
//基础知识：数组名就是这块连续内存空间的首地址（首地址==数组首元素的地址）
