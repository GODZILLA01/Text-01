//
//  main.c
//  whileXH
//
//  Created by 张兴超 on 2021/7/8.
// while 循环结构
//while（循环条件）
//    {
//      循环操作语句
//     }
//循环三要素：1 循环变量的初值 2 循环变量的判断 3 循环变量的更新 先判断再执行
//while循环中找循环变量的标准：到底谁适合做循环变量？然后确定循环变量的初值，变量的判断和变量的更新。

#include<stdio.h>
#include<time.h>
#include <stdlib.h>

//程序1 ：使用循环计算1-100的累加和
/*
int main(int argc, const char * argv[])
{
    int i=1,sum=0;
    while(i<=100)
    {
        sum=sum+i;
        i++;
    }
    printf("累加和为：%d\n",sum);
    return 0;
}
*/
//程序2: 某宝双十一2015年的交易额为8000000元，每年递增25% 问：按此速度哪年交易额达20000000？

/*
int main(int argc, const char * argv[])
{
    int year=2015;
    double sum=8000000;
    while(sum<20000000)
    {
        sum=sum+sum*0.25;  //等价形式是 sum =sum*1.25;   sum*=1.25; 每年增加0.25 就是乘以1.25
        year++;
        
    }
    printf("按照这个速度在%d年的时候成交额达到20000000\n",year);
    return 0;
}
*/

//程序3:使用循环模拟现实玩家对战 1、双方初始HP均为100     2、每次攻击5-15    3、Hp最先为零或以下的被KO
//基础代码 srand rand用法 用前需要导入新头文件 #include<time.h> #include <stdlib.h>
/*
 int main()
{
    srand((unsigned)time(NULL)); //用时间做种子，每次产生随机数不一样
    printf("%d",rand());        //rand()随机数字的取值范围：0--32767 但是随机数字产生一次就不变了 所以需要srand
    return 0;
}
*/

int main()
{
    srand(time(NULL));
   // printf("随机数字：%d\n",rand());
    int  hp1=100,hp2=100;
    int i=1;                //回合数
    int att1,att2;          //1p和2p每次的攻击
    while(hp1>=0 && hp2>=0)
    {
        att1=rand()%11+5;   //5-15之间的攻击力  表示a-b之间的范围用取模的办法：公式 rand（ ）%（b-a+1）+a
        att2=rand()%11+5;   //随机数模10可以把各位数取出来rand（）%10，也就是可以把0-9之间的数取出来 例如 1234%10 得出的结果为4
                            //同理可知，随机数模12的时候就是0-11 若后面➕一个数那么范围的前后都会➕上对应的数
                            //如rand（）%10+2 的范围就是 2-11
                            //默认1p首先攻击
        hp2-=att1;
        hp1-=att2;
       
        printf("第%d回合\n************************************\n",i);
        printf("玩家1的攻击力是：%d   玩家2剩余的血量为：%d\n",att1,hp2);
        printf("玩家2的攻击力是：%d   玩家1剩余的血量为：%d\n",att2,hp1);
        printf("************************************\n");
        i++;
        
    }
    return 0;
}
