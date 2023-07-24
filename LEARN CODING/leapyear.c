//How to cheak the year is leap year or not.
#include<stdio.h>
int main(){
    int y;
    printf("Enter the year :");
    scanf("%d",&y);

    if(y%400==0 || y%4==0 && y%100!=0){
        printf("the year is leap year :");
    }
    else{
        printf("the year is not leap year :");

    }
    return 0;
}