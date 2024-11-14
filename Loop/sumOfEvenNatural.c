#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a natural number : ");
    scanf("%d",&n);
    int i=2,sum = 0;
    while(i <= n){
        sum += i;
        i = i+2;
    }
    printf("\nSum of even natural : %d",sum);
    return 1;
}