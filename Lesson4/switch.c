#include <stdio.h>

int main(){
    int option;

    printf("Enter Your Option : ");
    scanf("%d",&option);

    switch(option){

    case 1:
        printf("Case 1 \n");
        break;

    case 2:
        printf("Case 2 \n");
         break;

    case 3:
        printf("Case 3 \n");
        break;

    default:
        printf("Error! option is not correct");
        break;
    }

    return 0;

}
