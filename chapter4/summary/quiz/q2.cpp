#include <iostream>

double getDoubleValue() {
	std::cout << "Enter a double value: ";

	double n { };
	std::cin >> n;

	return n;
}

char getOperatorValue() {
	std::cout << "Enter +, -, *, or /: ";

	char c { };
	std::cin >> c;

	return c;
}

void printResult(double x, double y, char op) {
	double answer { };

	if(op == '+') {
		answer = x + y;
	} else if(op == '-') {
		answer = x - y;
	} else if(op == '*') {
		answer = x * y;
	} else if(op == '/') {
		answer = x / y;
	} else {
		return;
	}

	std::cout << x << ' ' << op << ' ' << y << " is " << answer << '\n';
}

int main() {
	double x { getDoubleValue() };
	double y { getDoubleValue() };

	char op { getOperatorValue() };
	
	printResult(x, y, op);

	return 0;
}
