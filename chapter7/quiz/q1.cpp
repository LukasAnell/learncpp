#include <iostream>

int main() {
	std::cout << "Enter an integer: ";	
	int x { };
	std::cin >> x;

	std::cout << "Enter a larger integer: ";
	int y { };
	std::cin >> y;

	if (x > y) {
		int temp { x };
		x = y ;
		y = temp;

		std::cout << "Swapping the values\n";
	}

	std::cout << "The smaller value is " << x << '\n';
	std::cout << "The larger value is " << y << '\n';
	
	return 0;
}
