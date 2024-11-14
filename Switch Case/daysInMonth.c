#include<stdio.h>
int main(){
    int month;
    printf("\nEnter number of Month : ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("\nJan");
        break;
    case 2:
        printf("\nFeb");
        break;
    case 3:
        printf("\nMar");
        break;
    case 4:
        printf("\nApr");
        break;
    case 5:
        printf("\nMay");
        break;
    case 6:
        printf("\nJun");
        break;
    case 7:
        printf("\nJul");
        break;
    case 8:
        printf("\nAug");
        break;
    case 9:
        printf("\nSep");
        break;
    case 10:
        printf("\nOct");
        break;
    case 11:
        printf("\nNov");
        break;
    case 12:
        printf("\nDec");
        break;
    
    default:
        printf("\nInvalid Number of month.");
    }
    return 1;
}