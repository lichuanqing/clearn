//��ϰ5.3, Ǯ��ת�����������֡�Ԫ

#include<stdio.h>

int main(void){
    int Number=5;
    float amounts[Number];
    long dollars[Number],cents[Number];
    double sumA=0.0;
    int i,j;

//�������ݣ������浽����a
    printf("\n������Ǯ��(?.?Ԫ):");
    for (i=0;i<Number;i++){
        printf("\n %d ): ",i+1);
        scanf("%f",&amounts[i]);
    }

//ʹ������
for (i=0;i<Number;i++){
   dollars[i]=(int)amounts[i];
   cents[i]=(int)(amounts[i]*100)%100;
   printf("\n%.2fԪ=%dԪ%d��,��׼���д����%d.%d����",amounts[i],dollars[i],cents[i],dollars[i],cents[i]);
}

    printf("\n\n��Enter���˳�!");
    getchar();
    return 0;
}
