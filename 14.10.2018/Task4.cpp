/*
Напишите программу находящую в массиве сумму элементов делящихся либо
на 72 либо на 27(не вместе)
*/
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    unsigned int N = 0;
    cin >> N;
    int sum = 0, input;
    for (unsigned int i = 0; i < N; i++)
    {
        cin >> input;
        if ((abs(input) % 72 == 0) ^ (abs(input) % 27 == 0)) sum += input;
    };
    cout << sum;
    return 0;
}

