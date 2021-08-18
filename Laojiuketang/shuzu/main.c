//初始数组
//  main.c
//  chushishuzu
//  Created by 张兴超 on 2021/8/13.
//
//变量：内存中的一块空间
//数组：内存中的一串连续的空间（变量的集合）
//数组结构基本四个要素：1标识符：数组的名称。2 数组元素 3数组下标 4数组类型
//数组长度是固定不变的，避免数组越界，并且元素下标从0开始记
//数组元素必须属于相同类型
//语法 ：datatype arrayName[size]  如 int nums[25];   、char arry_of_name[30];
//初始化一维数组： int years[6]={12,13,14,15,16,17}; //后面元素个数与声明的一致
//int months[12]={1,2,3,7,8,10,12}; //后面没有列出的5个元素未初始化，默认值为0
//int days[]={1,15}; //这样默认元素个数为2
//int array[]={}; //错误：未知元素个数！！

  
#include <stdio.h>
#define N 5
/*有一个数列：8 4 2 1 23 344 12
 1、循环输出数数组的值
 2、求数列中所有数值的 和 以及 平均值
 3、猜数游戏：从键盘中任意输入一个数据，判断数列中是否包含此数
 */
/*
int main()
{
    int nums[]={8,4,2,1,23,344,12};
    int i;
    int sum,aver;
    for(i=0;i<7;i++)
    {
        printf("第%d个数是：%d\n",i+1,nums[i]);
        sum=sum+nums[i];
    }
 aver=sum/7;
 printf("%d\n",sum);
 printf("%d\n",aver);
    return 0;
}
 


//猜数游戏： 穷举法
int main()
{
    int nums[]={8,4,2,1,23,344,12};
    int i,num;
    for(i=0;i<7;i++)
    {
        printf("请猜一个数：");
        scanf("%d",&num);
        if (num==nums[i])
        {
            printf("你猜的这个数不在数组中\n");
            continue;
        }
        else{
            printf("你猜的数字在数组中\n");
        continue;
        }
        
    }
    return 0;
}

 
int main(int argc, const char * argv[])
{
    double nums[N];
    int i;           //循环变量
    for(i=0;i<5;i++) //使用数组时，要注意：一个循环尽量只做一件事
    {
        printf("请输入第%d位同学的成绩:",i+1);
        scanf("%lf",&nums[i]);
    }                                         //初始数组 动态录入
    for(i=0;i<5;i++)
    {
        printf("第%d位同学的成绩是：%lf\n",i+1,nums[i]);   //循环打印
    }
    return 0;
}
*/
