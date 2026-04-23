#include <iostream>

bool isEven(int n) {
	return (n % 2 == 0);
}

int main() {
	std::cout << "Enter an integer: ";

	int n { };
	std::cin >> n;

	bool nIsEven { isEven(n) };

	if(nIsEven) {
		std::cout << n << " is even\n";
	} else {
		std::cout << n << " is odd\n";
	}

	return 0;
}
