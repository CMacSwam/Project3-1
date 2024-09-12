/*
* File: P3-2
* Author: Chase McCluskey
*Date: 9/12/2024

Description: Computing simple mathematic equations in C++ and using user input
*
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Enter an integer:";
	int input1;
	cin >> input1;
	cout << "Enter an integer:";
	int input2;
	cin >> input2;
	cout << "Sum is " << input1 + input2 << endl;
	cout << "Difference is " << input1 - input2 << endl;
	cout << "Product is " << input1 * input2 << endl;
	double average = (input1 + input2) / 2.0;
	cout << "Average is " << average << endl;
}