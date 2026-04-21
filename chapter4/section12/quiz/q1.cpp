#include <iostream>

int main() {
	std::cout << "Enter a single character: ";

	char n { };
	std::cin >> n;

	std::cout << "You entered \'" << n << "\', which has ASCII code " << static_cast<int>(n) << ".\n";

	return 0;
}
