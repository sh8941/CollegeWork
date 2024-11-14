#include<stdio.h>
int main(){
    int day;
    printf("\nEnter number of day 1 to 7 : ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("\nSun");
        break;
    case 2:
        printf("\nMon");
        break;
    case 3:
        printf("\nTue");
        break;
    case 4:
        printf("\nWed");
        break;
    case 5:
        printf("\nThu");
        break;
    case 6:
        printf("\nFri");
        break;
    case 7:
        printf("\nSat");
        break;
    default:
        printf("\nInvalid day number.");
        break;
    }
}