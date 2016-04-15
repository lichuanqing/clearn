
/* 练习4.2，打印0~127内字符码，空白字符码输出，没2个字符输出一行
*/
#include<stdio.h>
#include<ctype.h>
int main(void)
{

/* 变量定义*/
int code=127;//打印0~127内字符码
char ch=0; //字符-可以用字符码代替

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


      printf("\n\n按Enter键退出！");
     getchar();

//
    return 0;
}
