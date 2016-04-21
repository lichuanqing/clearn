//练习5.1, 二个数组，倒数

#include<stdio.h>

int main(void){
    int Number=100;
    double data[Number];
    double sumA=0.0;
    int i,j;

//输入数据，并保存到数组a
    for (i=0;i<Number;i++){
     j=2*i+2;
     data[i]=1.0/(j*(j+1)*(j+2));
    // printf("\ndata[%d]=1/(%d*%d*%d)",i,j,j+1,j+2);
    }

//使用数组
for (i=0;i<Number;i++){
    j=i%2;
    sumA+=(j==0)? data[i]: -data[i];
}
   sumA=sumA*4.0+3.0;
    printf("\n总和为：%lf",sumA);
    printf("\n竟然是pi");


    printf("\n\n按Enter键退出!");
    getchar();
    return 0;
}
