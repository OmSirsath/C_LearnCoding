// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++)//row
//     {
//         for(j=1;j<=i;j++)  //column
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//-----------------------------------++----------------------------------------------

#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}