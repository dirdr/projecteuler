//Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include <stdio.h>
int p2(int n);
int main() {
    int answer = p2(35);
    printf("%d", answer);
    return 0;
}
int p2(int n){
    int tab[n+1];
    int i, answer = 0;
    tab[0] = 1;
    tab[1] = 1;
    for (i = 2; i <= n; i+=1) {
        tab[i] = tab[i-1] + tab[i-2];
        if (tab[i] > 4000000) break;
    }
    for (i = 0; i < n; i++) {
        if (tab[i] % 2 == 0) answer += tab[i];
    }
    return answer;
}
