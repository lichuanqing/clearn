
/* ��ϰ4.2����ӡ0~127���ַ��룬�հ��ַ��������û2���ַ����һ��
*/
#include<stdio.h>
#include<ctype.h>
int main(void)
{

/* ��������*/
int code=127;//��ӡ0~127���ַ���
char ch=0; //�ַ�-�������ַ������

for (int i=0;i<=127;i++){
      ch=(char)i;
      if (i%2==0) printf("\n");
      printf("  %4d",i);

      if(isgraph(i)){
        printf("                %c",ch);
          }
            else{
            switch(ch){
                case '\n':
                    printf("          newline",ch);
                     break;
                case ' ':
                     printf("            space",ch);
                      break;
                case '\t':
                     printf("   horizontalc tab",ch);
                      break;
                case '\v':
                     printf("   vertical    tab",ch);
                      break;
                case '\f':
                     printf("       from  feed",ch);
                      break;
                default:
                    printf("                 ");
                    break;

            }

            }
        }


      printf("\n\n��Enter���˳���");
     getchar();

//
    return 0;
}
