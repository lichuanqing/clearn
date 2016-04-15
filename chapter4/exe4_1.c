
/* 练习4.1，乘法表，大小由用户输入
*/
#include<stdio.h>
int main(void)
{

/* 变量定义*/
int TabSize=0;


/* 赋值-输入*/
printf("\n 这是一个简单的乘法表： \n\n1-请输入N以内数乘法(2<N<12)？:");
scanf("%d",&TabSize);
if (TabSize>12){
    printf("\n提示！输入的数字不可以大于12，现将其设为12\n\n");
    TabSize=12;
}
 else if(TabSize<2){
    printf("\n提示！输入的数字不可以小于2，现将其设为2\n\n");
    TabSize=2;
}

//双重循环
printf("\n====%d内乘法表====\n",TabSize);
for (int i=1;i<=TabSize;i++)
{
    for (int j=1;j<=i;j++){
      printf("%d*%d=%2d  ",i,j,i*j);
    }
    printf("\n"); //下一行
}

printf("\n_______________________\n给的例子参考，多多练习if for循环控制的使用\n");



for (int row=0;row<=TabSize;row++){
        for (int col=0;col<=TabSize;col++){
            if (row==0){
               if (col==0)
                printf("Row,Col |");
               else
                printf("%4d",col); //列号
            }
            else
            {
               if (col==0)
                printf("%5d   |",row); //行号
               else
                printf("%4d",col*row); //乘积
            }
        }
        printf("\n");
        if (row==0){ //画一条横线表头
                printf("_____"); //对齐补充
            for (int col=0;col<=TabSize;col++)
                printf("____");
        printf("\n");
        }


}

      printf("\n\n按Enter键退出！");
     getchar();
//
    return 0;
}
