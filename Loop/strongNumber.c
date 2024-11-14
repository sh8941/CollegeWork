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
    if (isStrongNumber(n)){
        printf("\nIt is a StrongNumber.");
    }else{
        printf("\nIt is not a StrongNumber.");
    }
    return 1;
}