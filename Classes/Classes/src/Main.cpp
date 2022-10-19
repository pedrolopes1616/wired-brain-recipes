#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int d = 7;


	vector <int> v{ 2,3,7,14,23 };
	for_each(v.begin(), v.end(), [d](int x) {
		if (x % d == 0)
			std::cout << x << " is divisible by " << d << endl;
		else
			std::cout << x << " is  not divisible by " << d << endl;
		});

	cin.get();
}