#include<stdio.h>
#include<math.h>
int first_num, sec_num ;
char num;
double square_root;
int main()
{
  printf("Enter your math operation: (+,-,*,/,^,s for (root): ");
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
      case '*':
        printf("You can do multiplyication.\n");
        printf("Enter your first number: ");
        scanf("%d",&first_num);
        printf("Enter your seconde number: ");
        scanf("%d",&sec_num);
        printf("%d * %d = %d",first_num,sec_num,first_num*sec_num);
        break;
      case '/':
        printf("You can do division.\n");
        printf("Enter your first number: ");
        scanf("%d",&first_num);
        printf("Enter your seconde number: ");
        scanf("%d",&sec_num);
        printf("%d / %d = %d",first_num,sec_num,first_num/sec_num);
        break;
    case '^':
        printf("You can do raise first number to the power of second number.\n");
        printf("Enter your first number: ");
        scanf("%d",&first_num);
        printf("Enter your seconde number: ");
        scanf("%d",&sec_num);
        int power_of = pow(first_num,sec_num);
        printf("%d ^ %d = %d",first_num,sec_num, power_of);
        break;
    case 's':
      printf("You can find the square root:\n");
      printf("Enter your number: ");
      scanf("%lf",&square_root);
      printf("%lf",sqrt(square_root));
      break;
    }
  return 0;
}
