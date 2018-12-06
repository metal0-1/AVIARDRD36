#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
int n;
cin >> n;
string hl;
int h=1;
if (n % 2 == 0) {
h = pow(10, n / 2 - 1);
hl = to_string(h);
cout << h;
for (int i =hl.length()- 1; i >= 0; i--) {
cout << hl[i];
}
cout << endl;
while (h < pow(10, n / 2)-1) {
h++;
hl = to_string(h);
cout << h;
for (int i = hl.length() - 1; i >= 0; i--) {
cout << hl[i];
}
cout << endl;
}
}
else {
h = pow(10, (n / 2));
hl = to_string(h);
cout << h;
for (int i = hl.length()-2; i >= 0; i--) {
cout << hl[i];
}
cout << endl;
while (h < pow(10, (n / 2)+1)-1) {
h++;
hl = to_string(h);
cout << h;
for (int i = hl.length()-2; i >=0; i--) {
cout << hl[i];
}
cout << endl;
}
}
system("pause");
return 0;
}2
//алгоритм эффективен так как мы рассматриваем только первую часть числа и просто крпируем её соответсвенно количество действий равняется количеству ответов

