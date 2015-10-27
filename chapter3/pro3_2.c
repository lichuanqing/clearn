
/* 程序实例3.使用if语句
*/
#include<stdio.h>
int main(void)
{

/* 变量定义*/
float price,discout,Total;/* 价格、折扣*/
int amount=0; /* 数量*/

/* 赋值-输入*/
price=3.5;
discout=0.05; /* 5%*/

printf("请输入购买数量：\n");
scanf("%d",&amount);
/* 计算*/
if (amount>10)
 Total=price*amount*(1-discout);
else
Total=price*amount;
/* 输出*/
printf("总额为：%.2f。",Total);


    return 0;
}
