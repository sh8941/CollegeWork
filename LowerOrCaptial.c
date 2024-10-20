#include<stdio.h>
int main(){
    char c;
    printf("\nEnter a Alphabet : ");
    scanf("%c",&c);
    if (c >= 'a' && c <= 'z'){
        printf("\nEntered letter is a Lower Alphabet");
    }else if(c >= 'A' && c <= 'Z'){
        printf("\nEntered letter is a Capital.");
    }else{
        printf("\nInvalid Character.");
    }
    
    
}