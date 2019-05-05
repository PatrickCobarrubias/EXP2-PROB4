#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int	a,b;
	
	cout << "Counting... " << endl;
	for  (a = 1; a < 10; a++) {
		cout << a << ",";
	}

	for ( b = 10; b < 31; b+=2) { 
		cout << b << ",";
	}


	getch();
	return 0;
}