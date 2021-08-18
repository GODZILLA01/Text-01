//  main.c
//  dengchashulie
//  Created by 张兴超 on 2021/7/13.
//
//程序1 需求说明： 计算级数n+（n-1）+（n-2）+....+3+2+1的值，其中n的值由用户输入。

#include <stdio.h>
int main()

/* {
    int sum,i;
    sum=0;
    printf("请输入一个数字：");
    scanf("%d",&i);
    do{
        sum=sum+i;
        i--;
    }while(i>=1);
    printf("结果是：%d\n",sum);
    return 0;
}
*/

//程序2 需求说明：编写一个程序，让用户输入一个正数，然后计算该数字各位数之和。
/*
 {
    int i,o;
    int sum = 0;
    printf("请输入一个正数：");
    scanf("%d",&i);
    do{
        o=i%10;
        sum=sum+o;
        i=i/10;
    }while(i>=1);
    printf("结果是：%d\n",sum);
    return 0;
}*/

//程序3 需求说明：编写一个程序，用于接收用户输入的数字，然后显示从0到该数字为止表示的所有字符。
/*
{
    int i;
    printf("请输入数字：");
    scanf("%d",&i);
    do {
        printf("%d   ",i);
        i--;
    }while(i>0);

    return 0;
}
 
*/
//程序4 猴子吃桃：第一天摘下若干桃子，吃了一半之后又多吃了一个，第二天将剩下的吃了一半之后又多吃了一个。到第十天的时候就剩下一个桃子了。求第一天一共摘了多少桃子。（采取逆向思维的方法）

{
    int y=1,x;
    int i=0;
    while(i<9)
    {
        y=(y+1) * 2;
        i++;
    }
    printf("所有桃子：%d\n",y);
    return 0;
}
