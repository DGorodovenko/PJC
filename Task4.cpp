#include <iostream>

int gcdRec(int a, int b) {
	return b == 0 ? a : gcdRec(b, a % b);
}

int sumDigits(int n) {
	return n == 0 ? n : n % 10 + sumDigits(n / 10);
}

int numDigits(int n) {
	return n > 10 ? numDigits(n / 10) + 1 : 1;
}

void printOddEven(int n) {
	if (n < 1) {
		return;
	}
	printOddEven(n - 2);
	std::cout << n << " ";
}

void hailstone(int n) {
	if (n == 1) {
		std::cout << n << " ";
		return;
	}
	if (n % 2 == 0) {
		std::cout << n << " ";
		hailstone(n / 2);
	} else {
		std::cout << n << " ";
		hailstone(3 * n + 1);
	}
}

int main() {
	std::cout << "gcdRec(12, 42) = " << gcdRec(12, 42) << std::endl
			<< "gcdRec(12, 25) = " << gcdRec(12, 25) << std::endl;
	std::cout << "sumDigits(123) = " << sumDigits(123) << std::endl
			<< "sumDigits(971) = " << sumDigits(971) << std::endl;
	std::cout << "numDigits(12345) = " << numDigits(12345) << std::endl
			<< "numDigits(971) = " << numDigits(971) << std::endl;
	std::cout << "printOddEven(15): ";
	printOddEven(15);
	std::cout << std::endl;
	std::cout << "printOddEven(14): ";
	printOddEven(14);
	std::cout << std::endl;
	std::cout << "hailstone(13): ";
	hailstone(13);
	std::cout << std::endl;
}
