
#include <stdio.h>
int main() {
    int m,n,x;

   printf("Enter the number for M : ");
   scanf("%d",&m);
    printf("Enter the number for N : ");
   scanf("%d",&n);
     printf("Enter the number for X : ");
   scanf("%d",&x);

   if(m>n&&m>x){
    printf("The biggest number is M = %d",m);
   }
    else if(n>m&&n>x){
   printf("The biggest number is N = %d",n);
   }
   else {
    printf("The biggest number is X = %d",x);
   }

    return 0;
}
