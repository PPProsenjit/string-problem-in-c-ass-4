#include<stdio.h>
#include<string.h>
//swap function 
 void swap(char* A, int i,int j){
    int temp = A[i];
     A[i] = A[j];
     A[j] = temp;
 }
 //sorting function
 int sortString(char A[],int len){
     
     //compare two 
     for(int i = 0; i < len -1; i++){
         for(int j = i+1; j < len; j++){
             if(A[i] > A[j]){
                 //call swap function
                 swap(A, i, j);
             }
         }
     }
     return *A;
 }
int main(){
    char A[100];
    int len = 0, vowel = 0, cons = 0;
    printf("Enter the string: ");
    gets(A);
    //int len = strlen(A);
    while(A[len] != '\0'){
      len++;
    }
   //call sorting function
    sortString(A, len);
    printf("After sorting string: %s", A);

    return 0;
}