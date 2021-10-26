//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

#include <stdio.h>
#include <math.h>
int p9();
int main(){
    int answer = p9();
    printf("%d", answer);
    return 0;
}
int p9(){
    int a, b, c;
    int result = 0;
    for (a = 1; a <= 1000; a++) {
        for (b = 1; b < 1000; b++) {
            for (c = 1; c <= 1000; c++) {
                result = (a + b + c);
                if (result == 1000) {
                    int left = (int)pow(a, 2) + (int)pow(b, 2);
                    int right = (int)pow(c, 2);
                    if (left == right) {
                        return a*b*c;
                    }
                }
            }
        }
    }
    return -1;
}
