/* 练习2.4，C语言入门经典第四版 p.77 */
#include <stdio.h>
int main(void)
{


    float salery=0.0f; /* 一周薪水单位美元*/
    float times=0.0f; /* 一周上班小时*/
    long rate=0.0f; /*小时平均工资 单位分 */
    const long cents_per_dollar=100L;

    /* 输入*/
    printf("请输入一周工作时间（单位小时）：");
    scanf("%f",&times);
    printf("请输入一周的薪水（单位美元）：");
    scanf("%f",&salery);

    rate=salery/times*cents_per_dollar;
    /* printf("美元：%f",salery/times);*/
    printf("您小时平均工资为%d美元%d美分。\n",rate/cents_per_dollar,rate%cents_per_dollar);

    printf("按任意键退出！");
    getch();
    return 0;
}
