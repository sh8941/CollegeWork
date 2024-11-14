#include<stdio.h>
int main(){
    int year;
    printf("\nEnter a Year : ");
    scanf("%d",&year);
    if(year%100 == 0){
        if(year%400 == 0){
            printf("\nThis is Leap Year.");
        }else{
            printf("\nThis is not a Leap Year.");
        }
    }else{
        if(year%4 == 0){
            printf("\nThis is a Leap Year.");
        }else{
            printf("\nThis is not a Leap Year.");
        }
    }
}