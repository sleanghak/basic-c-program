#include <stdio.h>

int main(){
    int option;

    printf("Enter Option : ");
    scanf("%d",&option);
    //  1==1
    if(option==1){
        printf("case 1 \n");
    }
    else if(option==2){
        printf("case 2 \n");
    }
    else if(option==3){
        printf("case 3 \n");
    }
    else{
         printf("Error! option is not correct\n");
    }


    return 0;
}
