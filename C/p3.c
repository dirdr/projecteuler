//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include <stdio.h>
int p3(long long unsigned n);
int main(){
    int answer = p3(600851475143);
    printf("%d", answer);
    return 0;
}
int p3(long long unsigned n){
    int d = 2, max = 0;
    while (n > 1) {
        while (n % d == 0) {
            max = d;
            n = n / d;
        }
        d++;
    }
    return d-1;
}
