#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	do {
		cout << "Enter a number (-1 = quit): ";
		if(!(cin >> x)) {
			cout << "Please enter numeric characters only." << endl;
			cin.clear();
			cin.ignore(10000,'\n');
		}
		else if(x != -1) {
			cout << "You entered " << x << endl;
		}
	}
	while(x != -1);
	cout << "Quitting program." << endl;
	
	return 0;
}
   