#include<stdio.h>
#include<math.h>
int first_num, sec_num;
char num;
int main()
{
  printf("Enter your math operation: (+,-,*,/,^) ");
  num = getchar();
    switch(num)
    {
      case '+':
        printf("You can do addition.\n");
        printf("Enter your first number: ");
        scanf("%d",&first_num);
        printf("Enter your seconde number: ");
        scanf("%d",&sec_num);
        printf("%d + %d = %d",first_num,sec_num,first_num+sec_num);
        break;
      case '-':
        printf("You can do subtraction.\n");
        printf("Enter your first number: ");
        scanf("%d",&first_num);
        printf("Enter your seconde number: ");
        scanf("%d",&sec_num);
        printf("%d - %d = %d",first_num,sec_num,first_num-sec_num);
        break;




    }
      

  return 0;
}
