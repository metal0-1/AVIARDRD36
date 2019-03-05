#include <iostream>
using namespace std;
struct Node {
	double data;
	Node* next = NULL;
	Node* prev = NULL;
};
class double_stack {
	Node up;
public:
	double_stack() :up(NULL) {}
	void push(double x) {
		Node* temp = new Node;
		temp->data = x;
		temp->next = up;
		up = temp;
	}
	double pop() {
		if (up == NULL) {
			cout << "Stack is empty";
			return 0;
		}
		Node* temp = up;
		up = up->next;
		double x = temp->data;
		delete temp;
		return x;
	}
	~double_stack() {
		while (up != NULL) {
			Node* temp = up;
			up = up->next;
			delete temp;
		}
	}
};
int main() {
	double_stack A;
	A.push(9.324);
	A.push(8.123);
	A.push(0.24);
	A.push(0.17);
	A.push(81.2);
	A.push(92.2);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	A.push(3.14);
	A.push(2.718182);
	A.push(1.23);
	A.push(9.11);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	return 0;
}
