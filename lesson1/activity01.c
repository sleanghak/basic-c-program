#include <stdio.h>

int main(){
   int a,b,c;

   printf("Enter Number A : ");
   scanf("%d",&a);
   printf("Enter Number B : ");
   scanf("%d",&b);
   c=a+b;
   printf("Result A+B = %d\n",c);
   c=a-b;
   printf("Result A-B = %d \n",c);
   c=a*b;
   printf("Result A*B = %d\n",c);
    c=a/b;
   printf("Result A/B = %d\n",c);
     c=a%b;
   printf("Result AB = %d\n",c);

    getch();
    return 0;
}
