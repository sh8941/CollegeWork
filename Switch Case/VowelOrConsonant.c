#include<stdio.h>
int main(){
    char c;
    printf("\nEnter a alphabet in small case : ");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
        printf("\nVowel");
        break;
    case 'e':
        printf("\nVowel");
        break;
    case 'i':
        printf("\nVowel");
        break;
    case 'o':
        printf("\nVowel");
        break;
    case 'u':
        printf("\nVowel");
        break;
    
    default:
        printf("\nConsonant.");
        break;
    }
}