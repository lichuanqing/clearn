//����5.5, ʹ��Ѱַ����&������ڴ��ַ%p��

#include<stdio.h>


int main(void){
    long a=0L,b=1L,c=2L;
    double d=1.0,e=2.0,f=3.0,aa[5]={1,2,3};//�����ʼ��
    int numbers[2][3]={
    {1,2,3},
    {4,5,5}
    }; //��ά�����ʼ��


    printf("\na���ڴ��ַΪ��%p,����ֵΪ��%d",&a,a);
    a=12L;
    printf("\na���ڴ��ַΪ��%p,����ֵΪ��%d",&a,a);
     printf("\nb���ڴ��ַΪ��%p,����ֵΪ��%d",&b,b);
      printf("\nc���ڴ��ַΪ��%p,����ֵΪ��%d",&c,c);
       printf("\nd���ڴ��ַΪ��%p,����ֵΪ��%f",&d,d);
        printf("\ne���ڴ��ַΪ��%p,����ֵΪ��%f",&e,e);
        printf("\nf���ڴ��ַΪ��%p,����ֵΪ��%f",&f,f);

    printf("\na������Ϊ long��ռ��%d���ֽ�",sizeof(a)); //sizeof(long)
     printf("\nd������Ϊ double��ռ��%d���ֽ�",sizeof(d));

     for (int i=0;i<5;i++){
        printf("\naa[%d]=%f",i,aa[i]);
     }

     printf("\naa���鳤��Ϊ5������Ϊ˫���ȣ�ռ���ڴ��ַ�Ϊ:%d ",sizeof(aa));
     printf("\n\nnumbers[1][2]=%d",numbers[0][1]);
    printf("\n��Enter���˳�!");
    getchar();
    return 0;
}
