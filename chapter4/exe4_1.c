
/* ��ϰ4.1���˷�����С���û�����
*/
#include<stdio.h>
int main(void)
{

/* ��������*/
int TabSize=0;


/* ��ֵ-����*/
printf("\n ����һ���򵥵ĳ˷��� \n\n1-������N�������˷�(2<N<12)��:");
scanf("%d",&TabSize);
if (TabSize>12){
    printf("\n��ʾ����������ֲ����Դ���12���ֽ�����Ϊ12\n\n");
    TabSize=12;
}
 else if(TabSize<2){
    printf("\n��ʾ����������ֲ�����С��2���ֽ�����Ϊ2\n\n");
    TabSize=2;
}

//˫��ѭ��
printf("\n====%d�ڳ˷���====\n",TabSize);
for (int i=1;i<=TabSize;i++)
{
    for (int j=1;j<=i;j++){
      printf("%d*%d=%2d  ",i,j,i*j);
    }
    printf("\n"); //��һ��
}

printf("\n_______________________\n�������Ӳο��������ϰif forѭ�����Ƶ�ʹ��\n");



for (int row=0;row<=TabSize;row++){
        for (int col=0;col<=TabSize;col++){
            if (row==0){
               if (col==0)
                printf("Row,Col |");
               else
                printf("%4d",col); //�к�
            }
            else
            {
               if (col==0)
                printf("%5d   |",row); //�к�
               else
                printf("%4d",col*row); //�˻�
            }
        }
        printf("\n");
        if (row==0){ //��һ�����߱�ͷ
                printf("_____"); //���벹��
            for (int col=0;col<=TabSize;col++)
                printf("____");
        printf("\n");
        }


}

      printf("\n\n��Enter���˳���");
     getchar();
//
    return 0;
}
