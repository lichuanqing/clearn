//��ϰ5.1, �������飬����

#include<stdio.h>

int main(void){
    int Number=100;
    double data[Number];
    double sumA=0.0;
    int i,j;

//�������ݣ������浽����a
    for (i=0;i<Number;i++){
     j=2*i+2;
     data[i]=1.0/(j*(j+1)*(j+2));
    // printf("\ndata[%d]=1/(%d*%d*%d)",i,j,j+1,j+2);
    }

//ʹ������
for (i=0;i<Number;i++){
    j=i%2;
    sumA+=(j==0)? data[i]: -data[i];
}
   sumA=sumA*4.0+3.0;
    printf("\n�ܺ�Ϊ��%lf",sumA);
    printf("\n��Ȼ��pi");


    printf("\n\n��Enter���˳�!");
    getchar();
    return 0;
}
