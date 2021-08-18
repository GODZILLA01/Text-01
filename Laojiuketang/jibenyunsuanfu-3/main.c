//  main.c
//  jibenyunsuanfu
//  Created by 张兴超 on 2021/7/8.


//算术运算符 + - * / % 
//关系运算符 > < >= <= == !=
//逻辑运算符 && ｜｜ ！
//赋值运算符 += -= ++ --
//运算优先级：（ ）、sizeof、++、--、！、算术运算符、关系运算符、&&、｜｜、赋值运算符

#include <stdio.h>
//程序1
/*
 int main()
{
    //符合运算符
    int num = 8;
    num %= 5;       //等价形式是：num = num % 5 类似的 num +=5 等价 num=num+5
    printf("%d\n",num);
    return 0;
    
}
*/


//程序2 :对“++”和”--“的理解。 关键在与运算是由 右向左进行的
/*
int main()
{
    int num,result1,result2,result3,result4;
    num = 5;
    result1 = num++;  //先进行赋值运算 最后num再++
    result2 = ++num;  //先++再进行赋值运算
    result3 = num--;
    result4 = --num;
    printf("%d\n",result1);
    printf("%d\n",result2);
    printf("%d\n",result3);
    printf("%d\n",result4);
    return 0;
}
*/


//程序3:sizeof 运算符可以获得数据类型占用内存的大小
//基本用法：sizeof（数据类型） 结果以字节为单位
int main()
{
    printf("sizeof(int) = %d\n",sizeof(int));
    printf("sizeof(long) = %d\n",sizeof(long));
    printf("sizeof(float) = %d\n",sizeof(34.4f)); //后面加f表示float类型
    printf("sizeof(double) = %d\n",sizeof(34.4));
    return 0;
}
