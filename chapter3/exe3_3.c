
/* 练习3.3，不同折扣
*/
#include<stdio.h>
int main(void)
{

/* 变量定义*/
int Num=0; /* 购买数量*/
float price=5.0,Total=0.0; /* 单价,总价*/
float discount=0.0;

/* 赋值-输入*/
printf("\n请输入购买数量:");
scanf("%d",&Num);
Total=price*Num;
//if (Total>=50)
//{
// printf("\n折扣15%，折扣前总价=%f,折扣后总价=%f，折扣=%f",Total,Total*(1-0.15),Total*0.15);
//}
//    else if(Total >=30){
// printf("\n折扣10%，折扣前总价=%f,折扣后总价=%f，折扣=%f",Total,Total*(1-0.15),Total*0.15);
//    }
//    else{
// printf("\n总价低于%f，无折扣",30);
//    }
if (Total>=50){
    discount=0.15;
    }
else if (Total>=30){
        discount=0.10;
    }
else{
        discount=0.0;
    }

printf("\n折扣%3.1f折，\n折扣前总价=%.2f$,折扣后总价=%.2f$，\n折扣=%.2f$",discount*10,Total,Total*(1-discount),Total*discount);

    return 0;
}
