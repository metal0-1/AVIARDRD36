/*
Напишите функции min, max, avg, med, процедуру swap принимающие в себя
три вещественных аргумента и программу с примером из использования. min -
находит минимальное из трех значений, max - максимальное, avg - среднее
арифметическое, med - медианное (гуглим, что это такое). swap - переставляет
значения по кругу ( первое во второе, второе в третье, третье в первое).
*/
#include <iostream>
#include <numeric>

using namespace std;

void swap(float& a, float& b, float& c)
{
    float t = a;
    a = c;
    c = b;
    b = t;
}

float min (float a, float b, float c)
{
    return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}
float max (float a, float b, float c)
{
    return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}
float med (float a, float b, float c)
{
    return a + b + c - min(a, b, c) - max(a, b, c);
}
float avg(float a, float b, float c)
{
	return (a + b + c)/3;
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    cout << "max: " << max(a, b, c) << ";\n";
    cout << "med: " << med(a, b, c) << ";\n";
    cout << "min: " << min(a, b, c) << ";\n";
    cout << "average: " << avg(a, b, c) << ";\n";
    cout << "before swap: " << a << " " << b << " " << c << ";\n";
    swap (a, b, c);
    cout << "before swap: " << a << " " << b << " " << c << ";\n";
    return 0;
