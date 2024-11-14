#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    switch (n == 0)
    {
    case 1:
        printf("\nNumber is zero.");
        break;
    default:
        switch (n > 0)
        {
        case 1:
            printf("\nNumber is positive.");
            break;
        default:
            printf("\nNumber is negative.");
            break;
        }
    }
    return 1;
}