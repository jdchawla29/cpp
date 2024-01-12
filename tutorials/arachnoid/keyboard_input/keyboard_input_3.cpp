#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x = 0;
	string badChars;
	do {
		cout << "Enter a number (-1 = quit): ";
		if(!(cin >> x)) {
			cout << "The input stream broke!" << endl;
			cin.clear();
			cin >> badChars;
			cout << "You typed \"" << badChars << "\" instead of a number." << endl;
			cout << "Please try again." << endl;
		}
		else if(x != -1) {
			cout << "You entered " << x << endl;
		}
	}
	while(x != -1);
	cout << "Quitting program." << endl;
	
	return 0;
}