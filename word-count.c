#include<stdio.h>
#include<string.h>

int main(){
    char A[100];
    int len = 0, result = 0;
    printf("Enter the string: ");
    gets(A);
     //check len of the string 
    while(A[len] != '\0'){

        //check spaces , new line and new tabs
        if(A[len] == ' ' || A[len] =='\n' || A[len] =='\t'){
            result++;
        }
        len++;
    }

    // Add one to count the last word if the string is not empty
    if(len > 0){
        result++;
    }

    printf("Number of the word in the string = %d", result);

    return 0;
}