#include <stdio.h>

void FuncParameter();

int main(){
    int n1,n2;

    printf("Enter n1 : ");
    scanf("%d",&n1);
    printf("Enter n2 : ");
    scanf("%d",&n2);

    // function call
    FuncParameter(n1,n2);
          // num1=n1  num2=n2

    return 0;
}


void FuncParameter( int num1,int num2){

    int result;

    result = num1 + num2 ;

    printf("The Result num1 + num2 = %d \n",result);



}
