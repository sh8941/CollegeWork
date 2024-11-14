#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    if ((n%5 == 0) && (n%11 == 0)){
        printf("\nNumber is Divisible by 11 and 5");
    }else{
        printf("\nNumber is not divisible.");
    }
    
}