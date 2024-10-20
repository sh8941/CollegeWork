#include<stdio.h>
int main(){
    char c;
    printf("\nEnter a character : ");
    scanf("%c",&c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("\nEntered character is a Alphabet.");
    }else if(c >= '0' && c <= '9'){
        printf("\nEntered character is a Number.");
    }else{
        printf("\nEntered character is a Special Character.");
    }
    return 0;
}