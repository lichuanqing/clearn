#include <stdio.h>

 /* ��ӡ���Ϻ������¶ȶ��ձ� ��������*/
 main()
{
   printf("���Ϻ������¶ȶ��ձ�\n");


    float x,y; /*x-���ϣ�y-���� */
    float x0,x1,dx; /* ����ϵ�п��� */
    x0=0;
    x1=300;
    dx=20;
    x=x0;
    printf("�����¶�  �����¶� \n");
    while(x <= x1) {
            y=(5.0/9)*(x-32);
//            printf("%3.0f \t %6.1f \n",x,y);
            x=x+dx;
    }

    for (x=x1;x>=x0;x=x-dx)
//        printf("%3.0f \t %6.1f \n",x,(5.0/9)*(x-32));
    /* ��ϰ2 �����¶�ת�������¶ȶ��ձ� */

    x0=-50;
    x1=150;
    dx=10;
    x=x0;
    printf("\n �����¶�  �����¶� \n");



    while(x <= x1) {
            y=9.0/5*x+32;
//            printf("%3.0f \t %6.1f \n",x,y);
            x=x+dx;
    }
}
 // /* ��ӡ���Ϻ������¶ȶ��ձ�*/
//main()
//{
//   // printf("Hello,World!\b");
//
//    int x,y; /*x-���ϣ�y-���� */
//    int x0,x1,dx; /* ����ϵ�п��� */
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
//    printf("���磬����ѽ��\n"); /*ע�ͣ���׼��������ֱ�ӵ���*/
//
//}

//int max(int a,int b);
//main()
//{
//    int x,y,z;
//    int max(int a,int b);
//    printf("�������������\n");
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
