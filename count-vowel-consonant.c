#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char A[100];
    int i = 0, vowel = 0, cons = 0;
    printf("Enter the string: ");
    gets(A);
    while(i < A[i] != '\0'){
        if (tolower(A[i]) == 'a' || tolower(A[i]) == 'e' || tolower(A[i]) == 'i' || tolower(A[i]) == 'o' || tolower(A[i]) == 'u') {
                vowel++;
        }
        else{
            cons++;
        }
        i++;
    }
    printf("Total vowel in string : %d\nTotal consonant in string %d\n", vowel, cons );

    return 0;
}