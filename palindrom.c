int isPalindrome(char X[], int i , int j) {
    if (i>j){
        return 1;
    }
    if(X[i]!=X[j]){
        return 0;
    }
    return isPalindrome(X, i+1, j-1);
}

// This is how your code should run, but your old solution had 2 problems.
// Firstly, you need to transport your returns to the topmost call, so we need to return the return of the recursive call. Therefore i added the last line
// Second, you mixed up the recursive case and the base case. You should return 1 as soon as i > j and in the other cases check if the characters are similar
