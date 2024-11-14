#include<stdio.h>
int isPerfect(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum == n;
}
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    if (isPerfect(n)){
        printf("\nNumber is perfect.");
    }else{
        printf("\nNumber is not perfect.");
    }
}