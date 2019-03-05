#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool Foxbeat(char empt, char full)
{
	if (empt == '(' && full == ')') return true;
	else if (empt == '[' && full == ']') return true;
	else if (empt == '{' && full == '}') return true;
	return false;
}
bool BalancedParentheses(string b)
{
	stack<char> A;
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == '(' || b[i] == '{' || b[i] == '[')
			A.push(b[i]);
		else if (b[i] == ')' || b[i] == '}' || b[i] == ']')
		{
			if (A.empty() || !foxbeat(A.top(), b[i]))
				return false;
			else
				A.pop();
		}
	}
	return A.empty();
}
int main()	{	
	string c;
	cout << "Enter an expression: ";
	cin >> c;
	if (BalancedParentheses(c))
		cout << "Balanced" << endl;
	else
		cout << "Not balanced." << endl;
	return 0;
}
