//��ϰ5.1, �������飬����

#include<stdio.h>

int main(void){
    int Number=5;
    double aArray[5],bArray[5];
    double sumA=0.0;
    int i,j;

//�������ݣ������浽����a
   printf("\n������%d����ֵ��",Number);
    for (i=0;i<Number;i++){
     printf("\n%d ): ",i+1);
     scanf("%lf",&aArray[i]);
    }

//ʹ������
for (i=0;i<Number;i++){
    bArray[i]=1.0/aArray[i];
    sumA+=bArray[i];
    printf("\n %d>  ��ֵ%.4lf, �䵹��%.4lf",i+1,aArray[i],bArray[i]);
}
    printf("\n����%d���������ܺ�Ϊ��%.4lf",Number,sumA);

    printf("\n\n��Enter���˳�!");
    getchar();
    return 0;
}
