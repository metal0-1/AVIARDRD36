/* Реализуйте структуру Rational для работы с рациональными числами, как с
несократимыми дробями. В программе должно присутствовать описание
структуры и программа показывающая работоспособность структуры.
Комментарий 1. Структура должна уметь работать с арифметикой и
сравнениями. С помощью структуры должна быть возможность создавать
пользовательские функции.
Комментарий 2. Программа должна содержать использование ВСЕХ
методов. На примере рациональных чисел посмотрите когда именно
вызываются методы. Для этого добавьте отладочную печать работающую
при их использовании. Например, “Copying Constructor is working”.
Комментарий 3. Последние 2 балла будут ставиться, если перегрузить
операторы ввода/вывода */

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

struct rational {
int ch;
unsigned int zn;
rational (int a = 0,int b = 1) {
if (b < 0) {
a = -a;
b = -b;
}
ch = a / gcd(abs(a),b);
zn = b / gcd (abs(a),b);
}

rational & operator += (rational &a) {
ch = ch * a.zn + a.ch * zn;
zn = a.zn * zn;
int d = gcd(abs(ch), zn);
ch /= d;
zn /= d;
return *this;
}
rational & operator -= (rational &a) {
ch = ch * a.zn - a.ch * zn;
zn = a.zn * zn;
int d = gcd(abs(ch), zn);
ch /= d;
zn /= d;
return *this;
}
rational & operator *= (rational &a) {
ch *= a.ch;
zn *= a.zn;
int d = gcd(abs(ch), zn);
ch /= d;
zn /= d;
return *this;
}
rational & operator /= (rational &a) {
int zncopy = a.zn, chcopy = a.ch;
if (a.ch < 0) {
chcopy = - chcopy;
zncopy = -zncopy;
}
ch *= zncopy;
zn *= chcopy;
int d = gcd(abs(ch), zn);
ch /= d;
zn /= d;
return *this;
}

rational operator = (const rational &b) {
ch = b.ch;
zn = b.zn;
return *this;
}

int gcd(int a, int b) {
if (a%b == 0) return b;
return gcd(b, a % b);
}
};

rational& operator + (rational a,rational &b) {
return a += b;
}
rational& operator - (rational a, rational& b) {
return a -= b;
}
rational& operator * (rational a, rational &b) {
return a *= b;
}
rational& operator / (rational a, rational& b) {
return a /= b;
}

const bool & operator == (const rational& a, const rational& b) {
return (a.ch * b.zn == a.zn * b.ch);
}
const bool & operator > (const rational& a, const rational& b) {
return (a.ch + 0.0/ a.zn > b.ch +0.0 / b.zn);
}
const bool & operator < (const rational& a, const rational& b) {
return (a.ch + 0.0 / a.zn < b.ch + 0.0/ b.zn);
}
const bool & operator >= (const rational& a, const rational& b) {
return !(a < b);
}
const bool & operator <= (const rational& a, const rational& b) {
return !(a>b);
}
const bool & operator != (const rational& a, const rational& b) {
return !(a==b);
}
ostream & operator « (ostream &os,rational &b) {
os « b.ch « '/' « b.zn;
return os;
}
istream & operator » (istream &os, rational &b) {
char slash = '0';
int znam1;
os » b.ch;
cin » slash;
if (slash != '/') return os;
os » znam1;
b.zn = znam1;
if (znam1 < 0) {
b.ch = -b.ch;
b.zn = -znam1;
}
int d = b.gcd(abs(b.ch), b.zn);
b.ch /= d;
b.zn /= d;
return os;
}

void swap(rational& a, rational& b) {
rational copy = a;
a = b;
b = copy;
}

rational arg(rational a, rational b) {
rational c = 2;
return (a + b) / c;
}

int main()
{
setlocale(LC_ALL, "Rus");
cout « "Введите 2 числа формата 'a/b'" « endl;
rational a, b;
cin » a » b;
rational sum = a + b, raz = a - b, pr = a * b, cha = a / b, ARG = arg(a,b);
cout « "Первое = " « a « endl;
cout « "Второе = " « b « endl;
cout « "Сумма = " « sum « endl;
cout « "Разность = " « raz « endl;
cout « "Произведение = " « pr « endl;
cout « "Частное = " « cha « endl;
if (a>b) cout « "Первое больше" « endl;
else if (a < b) cout « "Второе больше" « endl;
else if (a==b) cout « "Числа равны" « endl;
swap(a, b);
cout « "Пример пользовательской функции swap(меняет значения по кругу):Первое число =" « a « " Второе =" « b « endl;
cout « "Пример пользовательской функции arg(среднее арифм) = " « ARG « endl;

system("pause");
return 0;
}
