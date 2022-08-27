// FibConsoleApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

unsigned int fib(unsigned int n);
void calcFib();

int main()
{
	calcFib();
}

unsigned int fib(unsigned int n) {
	if (n == 0)
	{
		return 0;
	} else if (n == 1)
	{
		return 1;
	}
    return fib(n - 1) + fib(n - 2);
}

void calcFib() {
	cout << "Input a positive integer number: ";
	unsigned int number = 0;
	cin >> number;
	cout << "Fibonacci number: " << fib(number);
}
