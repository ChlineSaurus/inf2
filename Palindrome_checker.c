#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * Check the symbols in index i and index j
*/
// int isPalindrome(char X[]) {
//     int n = strlen(X)-1;
//     for (int i=0; i <(n/2); i++){
//         if (X[i]!= X[n-i]){
//             return 0;
//         }
//     }
//     return 1;
// }


int isPalindrome(char X[], int i , int j) {
    if (i>=j){
        if(X[i]!=X[j]){
            return 0;
        }
        isPalindrome(X, i+1, j-1);
    }
    return 1;
}


int main() {
    char X[] = "1a_b3cD45t54Dc3b_a1";

    // if (isPalindrome(X)==1) {
    //     printf("This is a Palindrome.");
    // }
    // else {
    //     printf("This is not a Palindrome.");
    // }


    if (isPalindrome(X, 0, strlen(X)-2)==1) {
        printf("This is a Palindrome.");
    }
    else {
        printf("This is not a Palindrome.");
    }

    return 0;
}
