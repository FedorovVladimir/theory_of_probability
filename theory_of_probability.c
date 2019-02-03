//
// Created by vladimir on 03.02.2019.
//

#include <stdio.h>
#include <math.h>
#include <iso646.h>
#include "theory_of_probability.h"

long int factorial(int n) {
    long int q = 1;
    for (int i = 1; i <= n; ++i) {
        q *= i;
        if (q < 0) {
            return -1;
        }
    }
    return q;
}

long int Ank(int n, int k) {
    long int q = 1;
    for (int i = n - k + 1; i <= n; ++i) {
        q *= i;
        if (q < 0) {
            return -1;
        }
    }
    return q;
}

long int Cnk(int n, int k) {
    return Ank(n, k) / factorial(k);
}

void reduce(long int *a, long int *b) {
    for (int i = 2; i <= sqrt(*a); ++i) {
        if (!((*a)%i) and !((*b)%i)) {
            *a /= i;
            *b /= i;
        }
    }
}