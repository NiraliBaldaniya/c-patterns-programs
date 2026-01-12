#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        // spaces
        for(int space = 1; space <= n - i; space++){
            printf(" ");
        }
        // stars
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

///enter number of rows: 5
//
//     *
//    **
//   ***
//  ****
// *****
    