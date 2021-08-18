//  main.c
//  循环进阶 ：if循环 for(表达式1；表达式2；表达式3) //（初值；循环条件判断；变量更新）
//                 { 语句；
//                  }
//
//  Created by 张兴超 on 2021/7/18.


#include <stdio.h>
#include<stdlib.h>
int main()
/*
{
    const int N = 20;  //const 是对常量的规定
    int i;
    for(i=0;i<N;i++)
    {
        printf("再别康桥\n");
    }
    return 0;
}

*/

//打印简易加法表
/*
{
    int num;
    int i;
    printf("请输入一个数字：");
    scanf("%d\n",&num);
    for(i=0;i<num;i++)
    {
        printf("%d  + %d= %d\n",i,(num-i),num);
        if(i%2==0)
        {
           printf("\t");
        }
    else
    {
        printf("\n");
            }
    }
    return 0;
}
 */

/*
//输入玩家年龄，若为负数则停止输入
{
    int i;
    for(;;)
    {
    printf("请输入玩家年龄：");
    scanf("%d",&i);
    if(i<0)
    {
        printf("年龄不能为负数！程序强制退出！\n");
        break;                                 // break的作用是跳出整个循环
    }

    }
    
}
*/


/*
 {
 double salary;
 double sa = 0;
 double aversalary;
 int i;
    for(i=0;i<6;i++)
 {
     
     printf("请输入工资：");
     scanf("%lf",&salary);
    
 }
printf("全部工资为：%lf",sa);
aversalary =sa/6;
printf("平均工资为：%lf",aversalary);
 }
 */
 

//猜价格
/*
{
 int goodprice;
 int i;
 for(i=0;i<5;i++)
 {
     printf("请输入一个数：");
     scanf("%d",&goodprice);
     if(goodprice==12)
     {
         printf("恭喜你在第%d次内就猜中了正确的价格!!!!\n",i+1);
     break;
     }
     else if(goodprice<12)
          printf("小了\n");
     else
          printf("大了\n");
 }
    if(i==5)
    {
        printf("未在规定次数内猜中价格!\n");
    }
    return 0;
}

*/

//循环录入用户性别，m/男、f/女 一旦输入错误，结束录入。 要求统计正确录入的次数。

/*
{
    char sex;
    int count=0;
    fflush(stdin);
    scanf("%c",&sex);
    if(sex!='m'&&sex!='M'&&sex!='f'&&sex!='F')
    {
        break;
    }
   count++;
    return 0;
}
*/


//break是直接跳出整个循环 continue是跳过本次循环
/*
{
    int i;
    int sum=0;
    for(i=0;i<101;i++)
    {
       
        if(i%2==0)
        {
            sum=sum+i;
            continue;
        }else
        {
            continue;
        }
    }
    printf("和为：%d\n",sum);
    return 0;
}

*/


