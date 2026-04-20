// Gets a single integer from the user
int readNumber();

// Outputs the answer
void writeAnswer(int n);

int main() {
	int x{ readNumber() };
	int y{ readNumber() };

	writeAnswer(x + y);

	return 0;
}
