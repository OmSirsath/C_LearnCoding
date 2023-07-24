//Addition of two number between two number.
// eg :- a=2,b=6 => 2+3+4+5+6=20
#include<stdio.h>
int main(){

   int n1,n2,s=0,i;
   printf("Enter two number : ");
   scanf("%d%d",&n1,&n2);
   for(i=n1;i<=n2;i++)
   {
    s = s + i;
   }
   printf("sum = %d",s);



    return 0;
}