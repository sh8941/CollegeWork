#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    int product = 1;
    while(n > 0){
        product *= (n%10);
        n = n/10;
    }
    printf("\nSum of digits : %d",product);
}