#include<stdio.h>
#include<string.h>

int main(){
    char A[100], B[100];
    int len = 0, j =0;
    printf("Enter the string: ");
    gets(A);
    //int len = strlen(A);
    // Iterate through the string and remove spaces
    while(A[len] != '\0'){
        if(A[len] != ' '){
            B[j++] = A[len];
        }
      len++;
    }
    // null - terminate the input string
   B[j] = '\0';
    printf("After sorting string: %s", B);

    return 0;
}