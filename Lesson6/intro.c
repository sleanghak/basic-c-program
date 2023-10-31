#include <stdio.h>

int main(){
    int num[5];
    int i;


    printf("Array have 5 Limit : ");

    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }

    printf("Display num :");
     for(i=0;i<5;i++){
        printf("%d\n",num[i]);
    }

    return 0;

}
