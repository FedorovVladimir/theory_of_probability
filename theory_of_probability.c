//
// Created by vladimir on 03.02.2019.
//

#include <stdio.h>
#include <math.h>
#include <iso646.h>
#include "theory_of_probability.h"

int factorial(int n) {
    int q = 1;
    for (int i = 1; i <= n; ++i) {
        q *= i;
    }
    return q;
}

int Ank(int n, int k) {
    return factorial(n) / factorial(n-k);
}

int Cnk(int n, int k) {
    return Ank(n, k) / factorial(k);
}

void reduce(int *a, int *b) {
    for (int i = 2; i <= sqrt(*a); ++i) {
        if (!((*a)%i) and !((*b)%i)) {
            *a /= i;
            *b /= i;
        }
    }
}