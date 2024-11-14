#include<stdio.h>
int isPrime(int n){
    for (int i = 2; i < n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,sum=0;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    for (int i = 2; i < n; i++){
        if(isPrime(i)){
            sum += i;
        }
    }
    printf("\nSum of all prime 2 to N : %d",sum);
    return 1;
}