#include<stdio.h>
int main(){
    int month;
    printf("\nEnter the number of Month : ");
    scanf("%d",&month);
    if (month == 1){
        printf("\nJan");
    }else if (month == 2){
        printf("\nFeb.");
    }else if (month == 3){
        printf("\nMar.");
    }else if (month == 4){
        printf("\nApr.");
    }else if (month == 5){
        printf("\nMay.");
    }else if (month == 6){
        printf("\nJun.");
    }else if (month == 7){
        printf("\nJuly.");
    }else if (month == 8){
        printf("\nAug.");
    }else if (month == 9){
        printf("\nSep.");
    }else if (month == 10){
        printf("\nOct.");
    }else if (month == 11){
        printf("\nNov.");
    }else if (month == 12){
        printf("\nDec.");
    }else{
        printf("\nInvalid number of Month.");
    }
    return 0;
}