//���� 5.3��ʹ���������ƽ��ֵ
//����5.5, �����������Խ�ԣ�

#include<stdio.h>


int main(void){
 int score[10];//����10��������ֵ
 int sum;//�ܷ�
 int i;
printf("������10��ѧ���ķ�����\n");

sum=0;
 for (i=0;i<10;i++){
    printf("%d >",i+1);
    scanf("%d",&score[i]);
    sum+=score[i];
 }

  printf("\n10��ѧ����ƽ����Ϊ��%f��",(float)sum/10);

  //����5.4 ����ʹ�����ݣ�
  for (i=0;i<10;i++){
    printf("\nѧ��%2d�ĵ÷�Ϊ��%3d",i+1,score[i]); //����ʹ������
  }

    printf("HELLO,WORLD!");
    getchar();
    return 0;
}
