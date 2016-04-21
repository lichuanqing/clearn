//练习5.3, 钱数转换成整数，分、元

#include<stdio.h>

int main(void){
    int Number=5;
    float amounts[Number];
    long dollars[Number],cents[Number];
    double sumA=0.0;
    int i,j;

//输入数据，并保存到数组a
    printf("\n请输入钱数(?.?元):");
    for (i=0;i<Number;i++){
        printf("\n %d ): ",i+1);
        scanf("%f",&amounts[i]);
    }

//使用数组
for (i=0;i<Number;i++){
   dollars[i]=(int)amounts[i];
   cents[i]=(int)(amounts[i]*100)%100;
   printf("\n%.2f元=%d元%d分,标准金额写法￥%d.%d整。",amounts[i],dollars[i],cents[i],dollars[i],cents[i]);
}

    printf("\n\n按Enter键退出!");
    getchar();
    return 0;
}
