#include <stdio.h>

//Non return Function with no parameter

void Output(); //St1 Function Declaration

int n; float m;
int main(){

    printf("Enter N : ");
    scanf("%d",&n);

    //St3 Function call
    Output();


    return 0;
};

//St2 Function definition

void Output(){
    printf("Hello Function...!\n");
    printf("Enter M : ");
    scanf("%d",&m);

};
