//sum  N natural numnber.
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter number :");
    scanf("%d",&n);

    sum = n*(n+1)/2;
    printf("Sum of n natural number %d",sum);
    return 0;

} 