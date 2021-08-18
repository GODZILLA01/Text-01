//
//  main.c
//  dowhileXH
//
//  Created by 张兴超 on 2021/7/9.
//
//do while的特点： 先执行 再判断

#include <stdio.h>

//程序1:分析下面的c语言代码确认 循环语句后b的值为：__8__
/*
 int main()
{
    int a=1,b=10;
    do {
        b-=a;
        a++;
    } while (b--<0); // 先执行第一次后b=9 此时判断第一次 9<0 为假 故为0 所以退出循环
    printf("%d\n",b);
    return 0;
}
*/

//将4位数的每一位都取出来怎么做？例如 1234
/*
 printf（"个位：%d\n"，num % 10);
 printf（"十位：%d\n"，num/10 % 10);
 printf（"百位：%d\n"，num/100 % 10);
 printf（"千位：%d\n，num/1000 % 10");
 */
//同样可以实现这个功能可以使用循环
/* int main()
 {
 int i=1234;
 while(i>=1)
 {
 printf("%d\n",i%10);
 i/=i;   //取出个位数字后立即去掉个位数字
 
 }
 return 0;
 }
 */
