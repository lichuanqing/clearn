
/* ��ϰ4.4�����ӳ��ȡ���ȿ�������
*/
#include<stdio.h>

int main(void)
{

/* ��������*/
int bread=0;//��-����
int lenv=0;//��-����

printf("��������ӿ�(����)����(����)��");
scanf("%d%d",&bread,&lenv);

for (int i=1;i<=bread;i++){ //�Ϻ��
    printf("*");
}
for (int j=2;j<lenv;j++){ //�۳���β��ռ��
    printf("\n*");
    for (int i=2;i<bread;i++){
        printf(" ");
    }
    printf("*");
}
 printf("\n");
for (int i=1;i<=bread;i++){ //�Ϻ��
    printf("*");
}
      printf("\n\n��Enter���˳���");
     getchar();

//
    return 0;
}
