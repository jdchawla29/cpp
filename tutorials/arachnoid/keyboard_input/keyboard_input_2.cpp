#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	do {
		cout << "Enter a number (-1 = quit): ";
		if(!(cin >> x)){
			cout << "The input stream broke!" << endl;
			break; // or x = -1 to jump out of do ... while
		}
		if(x != -1) {
			cout << "You entered " << x << endl;
		}
	}
	while(x != -1);
	cout << "Quitting program." << endl;
	
	return 0;
}