#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

//output:
//Enter a number of rows: 4
//1
//22
//333
//4444
