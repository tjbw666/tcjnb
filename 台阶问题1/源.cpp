#include<iostream>
#include<windows.h>
using namespace std;

//递归法求台阶
int f(int n)
{
        if (n < 1) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
      
        return f(n - 1) + f(n - 2);
}

//用递推求台阶
int f1(int n) {
    if (n < 1) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }

    int a = 1;
    int b = 2;
    int temp = 0;

    for (int i = 3; i < n + 1; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return temp;
}

int main()
{
   int a =  f(30);
   int b = f(30);
   cout << a << endl;
   cout << b << endl;
}