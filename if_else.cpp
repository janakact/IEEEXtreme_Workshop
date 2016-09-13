#include <iostream>

using namespace std;

int main()
{
	//Assign when declare the variable. Good practice, otherwise you may get a garbage value... ;)
	int n = 0;

	//Take an input
	cin >> n;
	if(n > 10)
		cout << "n is greater than 10\n";
	else
		cout << "n is less than or equal to 10\n";
	return 0;
}
