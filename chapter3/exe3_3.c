
/* ��ϰ3.3����ͬ�ۿ�
*/
#include<stdio.h>
int main(void)
{

/* ��������*/
int Num=0; /* ��������*/
float price=5.0,Total=0.0; /* ����,�ܼ�*/
float discount=0.0;

/* ��ֵ-����*/
printf("\n�����빺������:");
scanf("%d",&Num);
Total=price*Num;
//if (Total>=50)
//{
// printf("\n�ۿ�15%���ۿ�ǰ�ܼ�=%f,�ۿۺ��ܼ�=%f���ۿ�=%f",Total,Total*(1-0.15),Total*0.15);
//}
//    else if(Total >=30){
// printf("\n�ۿ�10%���ۿ�ǰ�ܼ�=%f,�ۿۺ��ܼ�=%f���ۿ�=%f",Total,Total*(1-0.15),Total*0.15);
//    }
//    else{
// printf("\n�ܼ۵���%f�����ۿ�",30);
//    }
if (Total>=50){
    discount=0.15;
    }
else if (Total>=30){
        discount=0.10;
    }
else{
        discount=0.0;
    }

printf("\n�ۿ�%3.1f�ۣ�\n�ۿ�ǰ�ܼ�=%.2f$,�ۿۺ��ܼ�=%.2f$��\n�ۿ�=%.2f$",discount*10,Total,Total*(1-discount),Total*discount);

    return 0;
}
