//程序5.5, 使用寻址符号&，输出内存地址%p；

#include<stdio.h>


int main(void){
    long a=0L,b=1L,c=2L;
    double d=1.0,e=2.0,f=3.0,aa[5]={1,2,3};//数组初始化
    int numbers[2][3]={
    {1,2,3},
    {4,5,5}
    }; //二维数组初始化


    printf("\na的内存地址为：%p,其数值为：%d",&a,a);
    a=12L;
    printf("\na的内存地址为：%p,其数值为：%d",&a,a);
     printf("\nb的内存地址为：%p,其数值为：%d",&b,b);
      printf("\nc的内存地址为：%p,其数值为：%d",&c,c);
       printf("\nd的内存地址为：%p,其数值为：%f",&d,d);
        printf("\ne的内存地址为：%p,其数值为：%f",&e,e);
        printf("\nf的内存地址为：%p,其数值为：%f",&f,f);

    printf("\na的类型为 long，占有%d个字节",sizeof(a)); //sizeof(long)
     printf("\nd的类型为 double，占有%d个字节",sizeof(d));

     for (int i=0;i<5;i++){
        printf("\naa[%d]=%f",i,aa[i]);
     }

     printf("\naa数组长度为5，类型为双精度，占有内存字符为:%d ",sizeof(aa));
     printf("\n\nnumbers[1][2]=%d",numbers[0][1]);
    printf("\n按Enter键退出!");
    getchar();
    return 0;
}
