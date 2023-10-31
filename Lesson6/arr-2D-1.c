#include <stdio.h>


int main() {

    int arr[3][2]={{12,22}, {42,32}, {52,62} };

  //     R  C
     arr[0][0]=1;
     arr[0][1]=2;

     arr[1][0]=4;
     arr[1][1]=3;

     arr[2][0]=5;
     arr[2][2]=6;

     printf("%d" ,arr[1][1]);

    // print 52

    getch();
    return 0;
}
