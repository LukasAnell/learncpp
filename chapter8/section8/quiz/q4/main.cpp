#include <iostream>

int main() {
    int outer{ 1 };

    while (outer <= 5) {
		int spaces { 5 - outer };

		while (spaces >= 1) {
			std::cout << "  ";

			--spaces;
		}

		int inner { outer };

        while (inner >= 1) {
            std::cout << inner << ' ';
        
			--inner;
        }
        
		std::cout << '\n';
        
		++outer;
    }

    return 0;
}
