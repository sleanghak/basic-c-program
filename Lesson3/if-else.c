#include <stdio.h>

int main(){
   // int a,b;
    int password;

    printf("Enter Password : ");
    scanf("%d",&password);

   // printf("Enter the number A : ");
    //scanf("%d",&a);
    //printf("Enter the number B : ");
    //scanf("%d",&b);

    if(password == 123){
        //printf("\nA = %d is greater than B = %d \n",a,b);
        printf("\nA is greater than B...! \n");
    }else{
        //printf("\nA = %d is smaller than B = %d \n",a,b);
         printf("\nA is smaller than B...! \n");
   }


    getch();
    return 0;
}
