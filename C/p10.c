//Find the sum of all the primes below two million.

#include <stdio.h>
long long p10(int n);
int main(){
    long long answer = p10(2000000);
    printf("%lld", answer);
    return 0;
}
long long p10(int n){
    int tab[n+1];
    int i, j;
    long long sum = 0;
    for (i = 0; i <= n; i++) {
        tab[i] = 0;
    }
    for (i = 2; i*i <= n; i++) {
        if (tab[i] == 0) {
            for (j = i*i; j <= n; j += i) {
                tab[j] = -1;
            }
        }
    }
    for (i = 2; i <= n; i++) {
        if (tab[i] == 0) {
            sum += i;
        }
    }
    return sum;
}
