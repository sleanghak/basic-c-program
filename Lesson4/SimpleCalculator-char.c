// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    int n1, n2;

    printf("Enter Number1: ");
    scanf("%d",&n1);

    printf("Enter Number2: ");
    scanf("%d",&n2);

    fflush(stdin);

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);

    switch(operation)
    {
        case '+':
            printf("The Result %d + %d = %d\n",n1, n2, n1+n2);
            break;

        case '-':
            printf("The Result %d - %d = %d",n1, n2, n1-n2);
            break;

        case '*':
            printf("The Result %d * %d = %d",n1, n2, n1*n2);
            break;

        case '/':
            printf("The Result %d / %d = %d",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct\n");
    }

    return 0;
}

