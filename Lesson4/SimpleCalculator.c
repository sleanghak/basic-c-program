#include <stdio.h>

int main(){
    int operation,number1,number2,result;

    printf("Enter Number1 : ");
    scanf("%d",&number1);

    printf("Enter Number2 : ");
    scanf("%d",&number2);

    printf("Enter Your operation (1-4): ");
    scanf("%d",&operation);

    switch(operation){
        case 1:
        result=number1+number2;
        break;

        case 2:
        result=number1-number2;
        break;

        case 3:
        result=number1*number2;
        break;

        case 4:
        result=number1/number2;
        break;

         // operator doesn't match any case constant 1, 2, 3,4
        default:
            printf("Error! operation is not correct\n");
        break;
    }
       printf("The Result = %d\n",result);

    return 0;
}
