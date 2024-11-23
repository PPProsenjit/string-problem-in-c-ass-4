#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char A[100];
    int i =0;
    printf("Enter the string: ");
    gets(A);
    //int len = strlen(A);
    while(A[i] != '\0'){
        if (tolower(A[i]) == 'a' || tolower(A[i]) == 'e' || tolower(A[i]) == 'i' || tolower(A[i]) == 'o' || tolower(A[i]) == 'u'){
            A[i] = '#';
        }
      i++;
    }
    
    printf("String after replacing:  %s\n", A);

    return 0;
}