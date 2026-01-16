#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int space=1;space<i;space++)
        {
            printf(" ");
        }
        for(int j=i;j<=n;j++)
        {
            printf("*");
        }
       
        printf("\n");
    }
    return 0;
}

//output:
//
//Enter the number of rows: 5
//
//*****
// ****
//  ***
//   **
//    *