#include <iostream>
#include <string>

std::string getName(int personNumber) {
	std::cout << "Enter the name of person #" << personNumber << ": ";

	std::string name { };
	std::getline(std::cin >> std::ws, name);

	return name;
}

int getAge(std::string_view name) {
	std::cout << "Enter the age of " << name << ": ";

	int age { };
	std::cin >> age;

	return age;
}

int main() {
	const std::string person1 { getName(1) };
	const int person1Age { getAge(person1) };

	const std::string person2 { getName(2) };
	const int person2Age { getAge(person2) };

	if(person1Age > person2Age) {
		std::cout << person1 << " (age " << person1Age << ") is older than " << person2 << " (age " << person2Age << ").\n";
	} else {
		std::cout << person2 << " (age " << person2Age << ") is older than " << person1 << " (age " << person1Age << ").\n";
	}

	return 0;
}
