#include<stdio.h>
#include<string.h>
#include<ctype.h>
  
int toCamelCase(char A[],int len){
      //initialize when to capitalize the next letter
     int capitalizeNext = 0;
     int i = 0, j = 0;
     while(i < len){
         //check space '_' and '-' 
         if(A[i] == ' ' || A[i] =='_' || A[i] == '-'){
             capitalizeNext = 1;
         }
         else{
             
             if(capitalizeNext && j > 0){
                 A[j++] = toupper(A[i]);
                 capitalizeNext = 0;
             }
             else{
                 A[j++] = tolower(A[i]);
             }
         }
         i++;
     }
     //terminate the input
     A[j] = '\0';
  }
int main(){
    char A[100];
    int len = 0, j =0;
    printf("Enter the string: ");
    gets(A);
    //int len = strlen(A);
    while(A[len] != '\0'){
      len++;
    }
    toCamelCase(A, len);
    printf("Camel case: %s\n", A);

    return 0;
}