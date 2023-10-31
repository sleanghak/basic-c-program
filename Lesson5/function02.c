
#include <stdio.h>

//Non return Function with no parameter

void Output(); //St1 Function Declaration

//--------------------------------
void HelloFunction(){
    printf("Hello My Name Is Function...!\n");
};

int main(){

    //St3 Function call
    Output();
    HelloFunction();


    return 0;
};
//St2 Function definition

void Output(){
    printf("Hello Function...!\n");


};

