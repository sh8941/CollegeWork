#include<stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("\nEntered character is a Alphabet.");
    }else{
        printf("\nEntered character is not a Alphabet.");
    }
    return 0;
}