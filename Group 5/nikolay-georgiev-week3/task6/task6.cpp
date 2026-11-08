#include <iostream>
using namespace std; 

int main()
{
	double n = 0; 
	cin >> n; 

	if (n != int(n)) {
            if (n > 0)
                cout << "Positive rational\n";
            else
                cout << "Negative rational\n";
	} 

    else {
            if (int(n) % 2 == 0)
                cout << "Even integer\n";
            else
                cout << "Odd integer\n"; 
    }
}