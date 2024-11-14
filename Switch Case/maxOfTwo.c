#include<stdio.h>
int main(){
    int a,b;
    printf("\nEnter two numbers : ");
    scanf("%d %d",&a,&b);
    switch (a > b)
    {
    case 1:
        printf("\n%d is greater.",a);
        break;
    default:
        printf("\n%d is greater.",b);
    }
    return 1;
}