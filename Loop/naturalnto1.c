#include<stdio.h>
int main()
{
    int i;
    printf("\nEnter a natural number : ");
    scanf("%d",&i);
    while(i > 0){
        printf("\n%d",i);
        i--;
    }
    return 0;
}