#include<stdio.h>
#include<string.h>
int main(){
    int A[100], B[100];
    int i = 0;
    printf("Enter the first string: ");
    gets(A);
    printf("Enter the second string: ");
    gets(B);

    // Compare the two strings character by character
    
    while(A[i] != '\0' && B[i] !='\0'){
        if(A[i] < B[i]){
            printf(" second string is grater than 1st string.\n");
            //if you are not give return 0 than 
            //the code continue end of null value
            return 0;
        }
        else if (A[i] > B[i]){
            printf(" 1st string is greater than 2nd string.\n");
            return 0;
        }
        i++;
    }
    // Check if one string is longer than the other
    if(A[i] == '\0' && B[i] =='\0'){
        printf("1st and 2nd string are equal.\n");
    }
    else if(A[i] == '\0'){
        printf("2nd string is greater than 1st string.\n");
    }
    else{
        printf("1st string is grater than 2nd string.\n");
    }
    return 0;

}