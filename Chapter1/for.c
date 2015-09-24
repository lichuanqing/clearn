/* for语句：满足括号内所有情况，条件用分号“；”号隔开 */
#define STEP 20
#include <stdio.h>
main()
{
    float x,y;
    int c;
   // #define STEP 20
    for (x=0;x<=300;x=x+STEP)
        printf("%.1f \t %.2f\n",x,5.0/9.0*(x-32));
    c=getchar();
    while (c != EOF ){
        putchar(c);
        c=getchar();
    }
}
