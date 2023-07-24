#include<stdio.h>
int main(){
    float a,b,c, flag=0;
    printf("Enter the value of a-b and c :");
    scanf("%f%f%f",&a,&b,&c);

    if(a>b){
       flag = ((b+c)>a);
    }
    else if(b>c){
        flag = ((a+c)>b);
    }

    else{
       flag = ((a+b)>c);
    }
    if(flag){
        printf("It is valid triangle \n");
    }
    else{
        printf("Invalid Triangle ");
    }
    return 0;
}