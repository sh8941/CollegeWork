#include<stdio.h>
int main(){
    char c;
    printf("\nEnter a Alphabet : ");
    scanf("%c",&c);
    printf((c >= 'a' && c <= 'z') ? "Small Case" : "Capital Case");
    return 1;
}