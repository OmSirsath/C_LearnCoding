//Write a program to calulate total and avrage mark of 5 subject
#include<stdio.h>
int main(){
    int phy,che,math,eng,hindi,total;
    double avg;
    printf("Enter marks of phy  :");
    scanf("%d",&phy);
    printf("Enter marks of chem  :");
    scanf("%d",&che);
    printf("Enter marks of math  :");
    scanf("%d",&math);
    printf("Enter marks of eng  :");
    scanf("%d",&eng);
    printf("Enter marks of hindi  :");
    scanf("%d",&hindi);


   total=phy+che+math+eng+hindi;
   printf("Total marks :%d\n",total);
   avg=total/5;
   printf("Average marks : %lf",avg);

    return 0;
}
