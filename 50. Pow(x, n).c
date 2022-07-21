#define MIN_INT -2147483648


double positivePow(double x, int n) {
    if (x == 0) return 0;
    if (n == 0) return 1;

    double result = positivePow(x, n / 2);
    result *= result;

    return (n % 2 == 0) ? result : x * result;
}

double myPow(double x, int n) {

    if (n == MIN_INT) n = n / 2;

    double result = positivePow(x, abs(n));

    return (n >= 0) ? result : 1 / result;
}