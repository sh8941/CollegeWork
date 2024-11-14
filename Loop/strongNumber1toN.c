#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int isStrongNumber(int n){
    int sum = 0,cpn = n;
    while (n > 0){
        sum += factorial(n%10);
        n = n/10;
    }
    return cpn == sum;
}
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        if (isStrongNumber(i)){
            printf("\n%d",i);
        } 
    }
    return 1;
}