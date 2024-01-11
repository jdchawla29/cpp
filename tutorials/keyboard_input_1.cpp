#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	do {
		cout << "Enter a number (-1 = quit): ";
		cin >> x;
		if(x != -1) {
			cout << "You entered " << x << endl;
		}
	}
	while(x != -1);
	cout << "Quitting program." << endl;
	
	return 0;
}