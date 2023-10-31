
// Non Return Function with Parameters

#include <stdio.h>

// Function Declaration
void Sum();

int main(){
    int num1,num2;

    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);

    // Function Call
    Sum(num1,num2);
 // n1=num1   n2=num2


    return 0;
}

//Function definition

        // parameter
void Sum(int n1,int n2){
    int result;

    result=n1+n2;
    printf("The  result = n1 + n2 = %d \n",result);

}



