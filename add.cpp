#include <iostream>
using namespace std;
int& add(const int &a, const int &b)
{
	return a + b;
}

int main()
{
	int a, b;

	cin >> a >> b;
	int c = add(a, b);

	return 0;
}
