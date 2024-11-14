#include <stdio.h>
int main()
{
    char c;
    printf("\nEnter a character : ");
    scanf("%c", &c);
    if ((c == 'a' || c == 'A') ||
        (c == 'e' || c == 'E') ||
        (c == 'i' || c == 'I') ||
        (c == 'o' || c == 'O') ||
        (c == 'u' || c == 'U')){
        printf("\nEntered character is vowel.");
    }else{
        printf("\nEntered character is consonant.");
    }
}