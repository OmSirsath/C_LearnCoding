//write a program to find the prime number 
#include<stdio.h>
int main(){
    int n,count=0,i;
    printf("Enter any number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("It is prime number ");
    }
    else{
        printf("It is not prime number ");
    }
    return 0;
}