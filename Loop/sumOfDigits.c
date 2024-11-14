#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    int sum = 0;
    while(n > 0){
        sum += (n%10);
        n = n/10;
    }
    printf("\nSum of digits : %d",sum);
}