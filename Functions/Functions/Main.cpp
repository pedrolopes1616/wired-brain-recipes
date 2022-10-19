#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double get_double(string prompt, double min, double max) {
	double input;

	do
	{
		cout << prompt << endl;
		cin >> input;
		if (input < min) cout << "Must be at least: " << min << endl;
		if (input > max) cout << "Must be at most: " << max << endl;
	} while (input < min || input > max);

	return input;
}
int main()
{
	double x = get_double("Enter the x value: ", -100, 100);
	double y = get_double("Enter the y value: ", -100, 100);

	double d = sqrt(pow(x, 2) + pow(y, 2));

	cout << "Distance is " << d << " meters\n";

	system("PAUSE");
	cin.get();
}