//how to calculate the maximum number between two number. 
#include<stdio.h>
int main(){
    int a,b;

    printf("Enter two number :");
    scanf("%d%d",&a,&b);

    if(a==b){
        printf("both are same ");
    }
    else if(a>b){
        printf("maximum number%d\n",a);
    }
    else{
        printf("is a maximum number %d\n",b);
    }   


     return 0;
}