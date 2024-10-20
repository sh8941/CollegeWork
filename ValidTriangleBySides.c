#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter sides's length of Triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b > c) || (b+c > a) || (c+a > b)){
        printf("\nTriangle is valid.");
    }else{
        printf("\nTriangle is invalid.");
    }
    return 0;
}