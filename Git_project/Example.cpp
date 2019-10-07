#include <iostream>
using namespace std;

int main() {
	int num1, num2 = 0;
	char a;
	cin >> num1 >> num2 >> a;

	switch (a) {
		case '/':
			cout << num1 / num2 << '\n';
			break;
	}

	return 0;
}