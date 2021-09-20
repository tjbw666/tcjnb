public int getResultByRecursion(int n) {
    if (n < 1) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return getResultByRecursion(n - 1) + getResultByRecursion(n - 2);
}