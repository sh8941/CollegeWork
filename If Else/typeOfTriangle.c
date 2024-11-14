#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter side of triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a == b && b == c){
        printf("\nEquilateral triangle.");
    }else if(a == b || b == c || c == a){
        printf("\nIsosceles triangle.");
    }else{
        printf("\nScalene tiangle.");
    }
    return 1;
}