#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a natural number : ");
    scanf("%d",&n);
    int sum = (n*(n+1))/2;
    printf("\nsum of first %d natural : %d",n,sum);
    return 1;
}