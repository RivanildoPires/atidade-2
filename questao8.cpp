#include <iostream>

using namespace std;


int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int num1 = 0;
        int num2 = 1;
        for (int i = 2; i <= n; ++i) {
            int num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
        }
        return num2;
    }
}

int main() {
    int N;
    cout << "Digite o valor de N: ";
    cin >> N;

    int resultado = fibonacci(N);

    cout << "O " << N << " termo da serie de Fibonacci e: " << resultado;

    return 0;
}
