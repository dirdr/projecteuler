//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <stdio.h>
int p6();
int main(){
    int answer = p6();
    printf("%d", answer);
    return 0;
}
int p6(){
    int first = 0, second = 0, i;
    for (i = 1; i <= 100; i++) {
        first += i*i;
    }
    for (int i = 1; i <= 100; i++) {
        second += i;
    }
    second *= second;
    return second-first;
}
