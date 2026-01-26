#include<stdio.h>
int main(){
    int number;
    printf("Enter the number of rows: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        for(int j=1;j<=i;j++)
        if((i+j)%2==0)
        {
            printf("1");
           
        }
        else
        {
            printf("0");
           
        }
        printf("\n");
    }
       
    return 0;
}

//output:
//Enter the number of rows: 5
//1
//01
//010
//1010
//01010
