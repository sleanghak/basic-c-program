
// Nested if else



#include <stdio.h>

int main(){
    int num1,num2;

    printf("Enter number1 : ");
    scanf("%d",&num1);
    printf("Enter number2 : ");
    scanf("%d",&num2);

    if(num1>=num2){

       if(num1>20){
            printf("Hello Number1 ...!\n");
        }else{
            printf("Hello Number2...!\n");
        }
    }
    else{
        printf("Hello  Number3...!\n");
    }

    getch();
    return 0;
}

