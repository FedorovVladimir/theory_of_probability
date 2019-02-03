#include <stdio.h>

int Cnk(int n, int k);
int Ank(int n, int k);

int factorial(int n);

int main() {
    int n = 10;
    int k = 3;
    printf("Ank = A(%d, %d) = %d\n", n, k, Ank(n, k));
    printf("Cnk = C(%d, %d) = %d\n", n, k, Cnk(n, k));
    return 0;
}

int Ank(int n, int k) {
    return factorial(n) / factorial(n-k);
}

int Cnk(int n, int k) {
    return Ank(n, k) / factorial(k);
}

int factorial(int n) {
    int q = 1;
    for (int i = 1; i <= n; ++i) {
        q *= i;
    }
    return q;
}