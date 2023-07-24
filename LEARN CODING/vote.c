//write a program to cheak thje person is eligible or not for vote.
#include<stdio.h>
int main(){
    int age;
    printf("Enter the age :");
    scanf("%d",&age);

    if(age>=18){
        printf("person is eligible for vote :");
    }
else{
        printf("person is not eligible for vote :");
    }   
 return 0;
}