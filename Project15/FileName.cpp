#include<iostream>
using namespace std;
int main()
{
	int N = 123;
	int lastDigit = 0;
	int rev = 0;
	int originalInput = 0;
	cout << "Enter N: ";
	cin >> N;
	originalInput = N;

	while (N != 0)
	{
		lastDigit = N % 10;
		rev = (rev * 10) + lastDigit;
		N /= 10;
	}

	cout << "Reverse = " << rev << endl;

	if (rev == originalInput)
	{
		cout << "Palindrome" << endl;
	}

	else
	{
		cout << "NOT NOT" << endl;
	}

}