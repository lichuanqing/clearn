/* 练习2.1，C语言入门经典第四版 p.76 */
#include <stdio.h>
int main(void)
{
    char ch='\n';
    long inches=0L; /* 输入英寸数*/
    long feets=0L; /*总英寸数*/
    const long inches_per_foot=12L;
    const long feet_per_yard=3L;

    printf("请输入英寸数：");
    scanf("%ld",&inches);
    feets=inches/inches_per_foot;
    printf("%d英寸=%d码%d英尺%d英寸\n",inches,feets/feet_per_yard,feets%feet_per_yard,inches%inches_per_foot);
    printf("按任意键退出！");
    getch();
    return 0;
}
