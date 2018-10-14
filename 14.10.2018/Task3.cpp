/*
Напишите программу вычисляющую среднее арифметическое
последовательности чисел. Длина последовательности неизвестна, однако
последовательность оканчивается нулем и других нулевых значений не
встречается. В программе запрещается использовать дополнительную
память(aka массивы, списки…)
*/
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    unsigned int input, sum = 0, length = 0;
    float average;
    do {
        cin >> input;
        sum += input;
        length++;
    } while (input != 0);
    average = (float)sum/(float)length;
    cout << average;
    return 0;
}
