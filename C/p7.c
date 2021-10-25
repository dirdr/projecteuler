//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

#include <stdio.h>
int p7(int n);
int main() {
    int answer = p7(10001);
    printf("%d", answer);
    return 0;
}
int p7(int n){
    int cur = 1, value = 0, count = 0, i;
    while (count <= n) {
        int flag = 0;
        for (i = 2; i < cur; i++) {
            if (cur % i == 0) {
                flag = -1;
                break;
            }
        }
        if (flag == 0) {
            value = i;
            count++;
        }
        cur++;
    }
    return value;
}

