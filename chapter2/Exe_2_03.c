/* 练习2.3，C语言入门经典第四版 p.77 */
#include <stdio.h>
int main(void)
{

    long amount=0L; /*输入数量*/
    float price=0.0f; /* 单价：标准版$3.5;豪华版$5.5.*/


    /* 输入单价*/
    printf("请输入单价(标准版$3.5;豪华版$5.5)：");
    scanf("%f",&price);
    printf("请输入购买数量：");
    scanf("%ld",&amount);

    printf("总价为$%-.2f。\n",price*amount);

    printf("按任意键退出！");
    getch();
    return 0;
}
