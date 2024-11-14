#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    switch (n%2 == 0)
    {
    case 1:
        printf("\nEven.");
        break;
    
    default:
        printf("\nOdd.");
    }
}