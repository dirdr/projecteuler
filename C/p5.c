//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>
int p5();
int main(){
    int answer = p5();
    printf("%d", answer);
    return 0;
}
int p5(){
    int answer = 1;
    int d = 1;
    while (d <= 20) {
        if (answer % d == 0) {
            d++;
        } else {
            d = 1;
            answer++;
        }
    }
    return answer;
}
