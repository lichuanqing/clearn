/* 练习2.2，C语言入门经典第四版 p.77 */
#include <stdio.h>
int main(void)
{

    long inches=0L; /* 输入英寸数*/
    long feet=0L; /*输入英尺数*/
    float width=0.0f,length=0.0f; /* 房间的长宽 单位码*/
    const float inches_per_foot=12.f;
    const float feet_per_yard=3.f;

    /* 输入房间长度*/
    printf("请输入房间长度，英尺数：");
    scanf("%ld",&feet);
    printf(".......英寸数：");
    scanf("%ld",&inches);
    length=inches/inches_per_foot/feet_per_yard+feet/feet_per_yard;

        /* 输入房间宽度*/
    printf("请输入房间宽度，英尺数：");
    scanf("%ld",&feet);
    printf(".......英寸数：");
    scanf("%ld",&inches);
    width=inches/inches_per_foot/feet_per_yard+feet/feet_per_yard;

    printf("房间长%-.2f码，宽%-.2f码，面积%-.2f平方码。\n",length,width,length*width);

    printf("按任意键退出！");
    getch();
    return 0;
}
