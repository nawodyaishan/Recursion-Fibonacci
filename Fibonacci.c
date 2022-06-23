//
// Created by Nawodya Ishan on 2022-06-23.
//
#include <stdio.h>

// Recursive vs Iterative Fibonacci

long IterativeFibonacci(int n) {
    long f2 = 0, f1 = 1, f_old;
    int i;

    for (i = 0; i < n; ++i) {
        f_old = f2;
        f2 = f2 + f1;
        f1 = f_old;
    }
    return f2;
}

long RecursiveFibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return (RecursiveFibonacci(n - 1) + RecursiveFibonacci(n - 2));
}

int main() {
    int howMany = 0, i;
    printf("I want table of Fibonacci up to n: ");

    scanf("%d", &howMany);
    printf("\n fibonacci\n");

    for (i = 1; i < howMany; i++)
        printf("\n%d\t %ld %ld\n", i, IterativeFibonacci(i), RecursiveFibonacci(i));
    return 0;
}
