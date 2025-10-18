#include "question3.h"

bool test_config()
{
    return true;
}

int get_fib_number(int n) {
    if(n == 1) return 0;
    if(n == 2) return 1;

    int a = 0, b = 1, fib = 0;
    for(int i = 3; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}