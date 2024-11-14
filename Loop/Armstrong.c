#include<stdio.h>
int cube(int n){
    return n*n*n;
}
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    int cpn = n,sum = 0;
    while(n > 0){
        sum += cube(n%10);
        n = n/10;
    }
    if(sum == cpn){
        printf("\nNumber is Armstrong.");
    }else{
        printf("\nNumber is not Armstrong.");
    }
}