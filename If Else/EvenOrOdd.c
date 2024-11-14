#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    printf(n%2==0 ? "Even" : "Odd");
    return 0;
}