//练习5.1, 二个数组，倒数

#include<stdio.h>

int main(void){
    int Number=5;
    double aArray[5],bArray[5];
    double sumA=0.0;
    int i,j;

//输入数据，并保存到数组a
   printf("\n请输入%d个数值：",Number);
    for (i=0;i<Number;i++){
     printf("\n%d ): ",i+1);
     scanf("%lf",&aArray[i]);
    }

//使用数组
for (i=0;i<Number;i++){
    bArray[i]=1.0/aArray[i];
    sumA+=bArray[i];
    printf("\n %d>  数值%.4lf, 其倒数%.4lf",i+1,aArray[i],bArray[i]);
}
    printf("\n上述%d个倒数的总和为：%.4lf",Number,sumA);

    printf("\n\n按Enter键退出!");
    getchar();
    return 0;
}
