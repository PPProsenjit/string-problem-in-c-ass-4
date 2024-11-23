#include<stdio.h>
#include<string.h>
#define No_Char 256
int areAnagram(char* A, char* B){
    
    //get two temp counter array where intial value is 0
    int count[No_Char] = {0};
    int count2[No_Char] = {0};
    int i;
    //count array each string
    for(i = 0; A[i] && B[i]; i++){
        count[A[i]]++;
        count2[B[i]]++;
    }
    // If both strings are of different length. 
    // Removing this condition will make the 
    // program fail for strings like "raii" 
    // and "rai" 
    if(A[i] || B[i]){
        return 0;
    }
    
    //compare count array
    for(i = 0; i < No_Char; i++){
        if(count[i] != count2[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char A[100], B[100];

    printf("Enter 1st string: ");
    gets(A);
    printf("Enter 2nd string: ");
    gets(B);
    
    
    //boolean logic 
    //function call
    if(areAnagram(A,B)){
        printf("this Two string are anagram.\n");
    }
    else{
        printf("this two string are not anagram.\n");
    }
    return 0;
}