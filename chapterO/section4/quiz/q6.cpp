#include <iostream>

int main() {
	std::cout << "Enter a number between 0 and 255: ";

	int n { };
	std::cin >> n;

	std::cout << n << " in binary is ";

	std::cout << ((n / 128) % 2);
	std::cout << ((n / 64) % 2);
	std::cout << ((n / 32) % 2);
	std::cout << ((n / 16) % 2);
	std::cout << ((n / 8) % 2);
	std::cout << ((n / 4) % 2);
	std::cout << ((n / 2) % 2);
	std::cout << (n % 2);

	std::cout << '\n';

	return 0;
}
