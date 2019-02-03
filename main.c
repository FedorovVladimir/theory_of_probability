#include <stdio.h>
#include <math.h>
#include "theory_of_probability.h"

// В урне имеется n шаров, из них n1 белых и n2 чёрных (n1 + n2 = n).
// Опыт: наугад извлекаются m шаров (без возвращения).
// Найти вероятность события A = {среди выбранных m шаров окажется ровно k белых}.
void task1();

int main() {
    task1();
    return 0;
}

void task1() {
    int n1 = 5; // белых
    int n2 = 5; // черных
    int m = 3; // всего вытаскиваем
    int k = 1; // вытаскиваем белых

    long int a = Cnk(n1, k) * Cnk(n2, m - k);
    long int b = Cnk(n1 + n2, m);
    double Pa = (double) a / b;

    printf("P(a) = %f\n", Pa);
    reduce(&a, &b);
    printf("P(a) = %ld/%ld\n", a, b);
}
