/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


// int countodd(int arr[], int n) {
//     int count = 0;
    // for(int i=0; i<n; i++) {
    //     if(arr[i]%2 != 0) {
    //         count++;
            
    //     }
        
    // }
//     // return count;
 //}
 
 
 void printarr(int arr[], int n) {
     for(int i = 0; i<n; i++) {
         printf("%d\t",arr[i]);
       
     }
    
     
 }
 
 
 void rev(int arr[],int n) {
     for(int i=0; i<n/2; i++) {
        int firstE = arr[i];
        int lastE = arr[n-i-1];
        arr[i] = lastE;
        arr[n-i-1] = firstE;
        
     }
     
     
 }





int main()
{
    // float price[3];
    // printf("enter three prices...");
    // scanf("%f",&price[0]);
    // scanf("%f",&price[1]);
    // scanf("%f",&price[2]);
    // printf("1st price %.2f\n 2nd price %.2f\n 3rd price %.2f\n",price[0],price[1],price[2]);
    
    int arr1[] = {1,44,67,89,50,24};
    rev(arr1, 6);
    printarr(arr1,6);
    
    
    
    
       
       
    
    return 0;
}
