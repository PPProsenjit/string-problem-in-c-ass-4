#include<stdio.h>
#include<string.h>

int main(){
    char A[100];
    int len = 0, flag = 1;
    printf("Enter the string: ");
    gets(A);
    //count length 
    while(A[len] != '\0'){
        len++;
    }

    //check palindrome 
    for(int i = 0; i < len/2; i++){

        if(A[i] != A[len - i - 1]){
            flag = 0;
            break;
        }
    }
    //boolean logic flag is true means flag = 1, false flag = 0
    if(flag){
        printf("%s is a palindrome.\n",A);
    }
    else{
        printf("%s is not a palindrome.\n",A);
    }
    return 0;
}