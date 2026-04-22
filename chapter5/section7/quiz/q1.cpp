#include <iostream>
#include <string>

int main() {
	std::cout << "Enter your full name: ";
	std::string fullName { };
	std::getline(std::cin >> std::ws, fullName);

	std::cout << "Enter your age: ";
	int age { };
	std::cin >> age;

	int nameLength { static_cast<int>(std::ssize(fullName)) };
	std::cout << "Your age + length of name is: " << nameLength + age << '\n';

	return 0;
}
