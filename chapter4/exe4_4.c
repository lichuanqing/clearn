
/* 练习4.4，盒子长度、宽度可以输入
*/
#include<stdio.h>

int main(void)
{

/* 变量定义*/
int bread=0;//宽-横向
int lenv=0;//长-纵向

printf("请输入盒子宽(横向)、长(纵向)：");
scanf("%d%d",&bread,&lenv);

for (int i=1;i<=bread;i++){ //上横边
    printf("*");
}
for (int j=2;j<lenv;j++){ //扣除首尾行占的
    printf("\n*");
    for (int i=2;i<bread;i++){
        printf(" ");
    }
    printf("*");
}
 printf("\n");
for (int i=1;i<=bread;i++){ //上横边
    printf("*");
}
      printf("\n\n按Enter键退出！");
     getchar();

//
    return 0;
}
