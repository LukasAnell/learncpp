#include <iostream>

int getStartingHeight() {
	std::cout << "Enter the height of the tower in meters: ";


	int h { };
	std::cin >> h;

	return h;
}

void printInfo(int seconds, double height) {
	if(height > 0.0) {
		std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
	} else {
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
	}
}

double calculateHeight(int startingHeight, int seconds) {
	return static_cast<double>(startingHeight) - (9.8f * static_cast<double>(seconds) * static_cast<double>(seconds)) / 2.0;
}

int main() {
	int startingHeight { getStartingHeight() };

	for(int i = 0; i < 6; i++) {
		double height { calculateHeight(startingHeight, i) };

		printInfo(i, height);

		if(height == 0) {
			return 0;
		}
	}

	return 0;
}
