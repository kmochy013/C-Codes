//  Find the vowels.

#include<stdio.h>

int main()
{    printf("\n\n\t\t\t Welcome to XorVik's KingDom $$\n\n\n");

   int ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);

    switch(ch){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
           printf("\n\n %c is a vowel. You did it man.",ch);
           break;
        default:
            printf("\n\n %c is not a vowel. Start your study from class Nursery\n\n\n ",ch);   
    }

    return 0;
}