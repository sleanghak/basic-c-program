#include <stdio.h>

void FunSwitch(); // Function Declaration

int main(){


    FunSwitch(); //Function call

    return 0;
}

//Function Definition

void FunSwitch(){
    int option,num1,num2,result;

    printf("Enter num1 : ");
    scanf("%d",&num1);
     printf("Enter num2 : ");
    scanf("%d",&num2);

    printf("Enter Your Option (1->4) ");
    scanf("%d",&option);

    switch(option)
    {
        case 1:{
            result = num1 + num2;
            printf("The Result  num1 + num2 = %d\n",result);
            break;
        }
        case 2:{
            result = num1 - num2;
            printf("The Result  num1 - num2 = %d\n",result);
            break;
        }
        case 3:{
            result = num1 * num2;
            printf("The Result  num1 * num2 = %d\n",result);
            break;
        }
        case 4:{
            result = num1 + num2;
            printf("The Result  num1 / num2 = %d\n",result);
            break;
        }
        default:{
            printf("Error Option...!\n");
        }

    }
}
