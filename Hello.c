#include <stdio.h>

 /* 打印华氏和摄氏温度对照表 浮点运算*/
 main()
{
   printf("华氏和摄氏温度对照表\n");


    float x,y; /*x-华氏；y-摄氏 */
    float x0,x1,dx; /* 华氏系列控制 */
    x0=0;
    x1=300;
    dx=20;
    x=x0;
    printf("华氏温度  摄氏温度 \n");
    while(x <= x1) {
            y=(5.0/9)*(x-32);
//            printf("%3.0f \t %6.1f \n",x,y);
            x=x+dx;
    }

    for (x=x1;x>=x0;x=x-dx)
//        printf("%3.0f \t %6.1f \n",x,(5.0/9)*(x-32));
    /* 练习2 摄氏温度转换华氏温度对照表 */

    x0=-50;
    x1=150;
    dx=10;
    x=x0;
    printf("\n 摄氏温度  华氏温度 \n");



    while(x <= x1) {
            y=9.0/5*x+32;
//            printf("%3.0f \t %6.1f \n",x,y);
            x=x+dx;
    }
}
 // /* 打印华氏和摄氏温度对照表*/
//main()
//{
//   // printf("Hello,World!\b");
//
//    int x,y; /*x-华氏；y-摄氏 */
//    int x0,x1,dx; /* 华氏系列控制 */
//    x0=0;
//    x1=300;
//    dx=20;
//    x=x0;
//    while(x <= x1) {
//            y=(x-32)*5/9;
//            printf("%d \t %d \n",x,y);
//            x=x+dx;
//    }
//
//}
//#include<math.h>
//#include<stdio.h>
//main()
//{
//    double x,s;
//
//    printf("input number:\n");
//    scanf("%lf",&x);
//    s=sin(x);
//    printf("sine of %lf is %lf.\n",x,s);
//    printf("世界，您好呀！\n"); /*注释：标准函数可以直接调用*/
//
//}

//int max(int a,int b);
//main()
//{
//    int x,y,z;
//    int max(int a,int b);
//    printf("输入二个整数：\n");
//    scanf("%d%d",&x,&y);
//    z=max(x,y);
//    printf("Maxumun of %d and %d is %d.",x,y,z);
//}
//
//int max(int a, int b)
//{
//    if (a>b) return a;else return b;
//
//}
