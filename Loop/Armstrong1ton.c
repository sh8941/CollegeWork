#include<stdio.h>
int cube(int n){
    return n*n*n;
}
int isArmstrong(int n){
    int cpn = n,sum = 0;
    while(n > 0){
        sum += cube(n%10);
        n = n/10;
    }
    if(sum == cpn){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        if (isArmstrong(i)){
            printf("\n%d",i);
        }
    }
    return 1;
}