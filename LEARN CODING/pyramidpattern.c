#include<stdio.h>
int main(){
    int i,j,k;

    for(i=1;i<=5;i++)//row
    {
        for(j=5;j>i;j--)//left space manage
        {
            printf(" ");
        }
        for(k=1;k<=i;k++) //*,middle,right side
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}