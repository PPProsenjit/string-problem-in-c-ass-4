#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char A[100];
    int i;
    printf("Enter the string: ");
    gets(A);
    while(A[i] != '\0'){
        if(islower(A[i])){
            A[i] = toupper(A[i]);
            
        }
        else if(isupper(A[i])){
            A[i] = tolower(A[i]);
        }
        
        i++;
    }
    
    printf("Converted string: %s\n", A);

    return 0;
}