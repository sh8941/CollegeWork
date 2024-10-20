#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter three angles of Triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if (((a+b+c) == 180) && (a != 0 && b != 0 && c != 0)){
        printf("\nTriangle is valid.");
    }else{
        printf("\n Triangle is invalid.");
    }
    return 0;
}