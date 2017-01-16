#include <iostream>

using namespace std;

int main() {
	float kms;
	float miles;
	cout << "Enter the number of kms : ";
	cin >> kms;
	cin.ignore();
	miles = kms / 1.6;
	cout << "The number of miles in " << kms << " is : " << miles << "." << endl;
	cout << "Press enter to continue" << endl;
	getchar();
	return 0;
}