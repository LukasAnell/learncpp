#include <iostream>

int main() {
	std::cout << "Enter a single character: ";

	char n { };
	std::cin >> n;

	int ascii { n };

	std::cout << "You entered \'" << n << "\', which has ASCII code " << ascii << ".\n";

	return 0;
}
