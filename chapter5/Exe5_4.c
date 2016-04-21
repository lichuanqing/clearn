//练习5.4, 二维数组

#include<stdio.h>
#include<math.h>
int main(void){
    int row=12,col=5; //行，列
    double data[12][5];
    double step=0.1;//步长
    int i,j;

    for (i=0;i<row;i++){
        data[i][0]=2.0+i*step;
        data[i][1]=1.0/data[i][0];
        data[i][2]=pow(data[i][0],2);
        data[i][3]=pow(data[i][0],3);//data[i][0]**3;
        data[i][4]=pow(data[i][0],4);
    }
 //输出 ------------
    printf("\n  x     1/x     x2     x3    x4\n");
   for (i=0;i<row;i++){
    for (j=0;j<col;j++){
        printf("%.3lf  ",data[i][j]);
    }
    printf("\n");
   }
    printf("\n\n按Enter键退出!");
    getchar();
    return 0;
}
