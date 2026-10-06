
#include <iostream>
using namespace std;

int main()
{
	int E = 50, M = 57;
		int odstupanje = (abs(E - M));
	bool stabilan = odstupanje <= 5;
	cout << "Odstupanje:" << odstupanje << endl;
	cout << "Stabilan:" << stabilan << endl;
	return 0;
}

