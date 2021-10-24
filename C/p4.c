//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.
#include <stdio.h>
int p4();
int isPalindrome(int n);
int main() {
    int answer = p4();
    printf("%d", answer);
    return 0;
}
int p4(){
    int i, j, max = 0;
    for (i = 999; i > 100; i--) {
        for (j = 999; j > 100; j--) {
            long long int product = i*j;
            printf("first : %d, second %d\n", i, j);
            if (isPalindrome(product) == 0) {
                if (product > max ) {
                    max = product;
                }
            }
        }
    }
    return max;
}

int isPalindrome(int n){
    int rev = 0;
    int dig = 0;
    int temp = n;
    while (n > 0) {
        dig = n % 10;
        rev = rev * 10 + dig;
        n  = n / 10;
    }
    if (temp == rev) return 0;
    else return -1;
}
