#include<stdio.h>
int main(){
    int n,fact=1;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--){
        fact *= i;
    }
    printf("\n%d! : %d",n,fact);
    return 1;
}