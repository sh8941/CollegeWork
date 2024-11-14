#include<stdio.h>
int main(){
    int n,arr[10];
    printf("\nEnter a positiver number : ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++){
        arr[i] = 0;
    }
    while (n > 0){
        arr[n%10]++;
        n=n/10;
    }
    for (int i = 0; i < 10; i++){
        printf("\nFrequency of %d : %d",i,arr[i]);
    }
    return 1;
}