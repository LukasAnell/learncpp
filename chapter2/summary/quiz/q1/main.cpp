#include <iostream>

// Gets a single integer from the user
int readNumber() {
	std::cout << "Enter a number to add: ";
	
	int n{ };
	std::cin >> n;

	return n;
}

// Outputs the answer
void writeAnswer(int n) {
	std::cout << "The answer is " << n << '\n';
}

int main() {
	int x{ readNumber() };
	int y{ readNumber() };

	writeAnswer(x + y);

	return 0;
}
