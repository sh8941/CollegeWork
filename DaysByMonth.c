#include<stdio.h>
int main(){
    int month; 
    printf("\nEnter the number of month : ");
    scanf("%d",&month);
    if (month >= 1 && month <= 12){
        if (month <= 7){
            if (month == 2){
                printf("\n28/29 Days.");
            }else if(month % 2 == 0){
                printf("\n30 Days.");
            }else{
                printf("\n31 Days.");
            }
        }else{
            if(month % 2 == 0){
                printf("\n31 Days.");
            }else{
                printf("\n30 Days.");
            }
        }
    }else{
        printf("\nEntered number of Month is invalid.");
    }
    
    
}