
//Syntax Function

#include <stdio.h>


void AddNumber(); //Function Declaration
void Hello();

int n,m,r;

int main(){

    // Function Call
    AddNumber();
    Hello();

    return 0;
}

//Function Definition
void AddNumber(){
    printf("Enter Number N : ");
    scanf("%d",&n);
    printf("Enter Number M : ");
    scanf("%d",&m);
    r=n+m;
    printf("The Result R = N+M = %d \n",r);
}

void Hello(){
    printf("Enter Number N : ");
    scanf("%d",&n);
    printf("Enter Number M : ");
    scanf("%d",&m);
    r=n*m;
    printf("The Result R = N*M = %d \n",r);
}

