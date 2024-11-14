#include<stdio.h>
int main(){
    int n,count=0;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    if(n == 0){
        printf("\nNumber of digit : 1");
        return 1;
    }
    while(n > 0){
        n = n/10;
        count++;
    }
    printf("Number of digit : %d",count);
    return 1;
}