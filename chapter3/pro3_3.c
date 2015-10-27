
/* 程序实例2.4，一个简单的计算：练习使用变量
*/
#include<stdio.h>
int main(void)
{

/* 变量定义*/
int Total,Cat,
    Dog; /* 一个语句中定义多个变量*/
int Pon=0; /* 最好定义是进行初始化设置-好习惯*/
int  other;

/* 赋值-输入*/
Cat=2;
Dog=1;
Pon=3;
other=10;
/* 计算*/
Total=Cat+Dog+Pon+other;
/* 输出*/
printf("We have %d pets in total.",Total);



    return 0;
}
