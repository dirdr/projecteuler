//What is the value of the first triangle number to have over five hundred divisors?

#include <stdio.h>
#include <math.h>
int p12();
int number_of_factor(int triangle);
int main(){
    int answer = p12();
    printf("%d", answer);
    return 0;
}
int p12() {
    int n = 1;  
    int current_triangle = 0;
    int running = 0;
    while (running == 0) {
        current_triangle += n;
        n++;
        if (number_of_factor(current_triangle) > 500) break;
    }
    return current_triangle;
}
int number_of_factor(int triangle) {
    int saved = triangle;
    int count = 0;
    int i;
    for (i = 1; i < (int)sqrt(triangle); i++) {
        if (triangle % i == 0) {
            if (triangle / i == i) count++;
            else count += 2;
        }
    }
    printf("nombre actuel: %d, nombre de diviseur : %d\n", saved, count);
    return count;
}
