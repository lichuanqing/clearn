#include <stdio.h>
float FtoC(float f); /* */
int main(void)
{
    float x;


    for (x=0;x<=300;x=x+20)
        printf("%6.0f \t %6.1f\n",x,FtoC(x));
}
float FtoC(float f)
{
    float c;
    c=5.0/9.0*(f-32);
    return c;
}

