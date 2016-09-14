#include <iostream>

using namespace std;

int factorial(int n)
{
	if(n>0)
		return factorial(n-1)*n;
	else 
		return 1;
}

int main()
{
    cout << factorial(10) << endl;
		return 0;
}

