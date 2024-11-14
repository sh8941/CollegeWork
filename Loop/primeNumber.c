#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    for (int i = 2; i < n; i++){
        if(n%i == 0){
            printf("\nNumber is not prime.");
            return 1;
        }
    }
    printf("\nNumber is prime.");
}