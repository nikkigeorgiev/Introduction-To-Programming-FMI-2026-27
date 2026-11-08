#include <iostream>
using namespace std; 

int main()
{
    int n;
    cin >> n; 

    int a = n % 10;
    n /= 10;
    int b = n % 10;
    n /= 10; 
    int c = n % 10;

    if (a == b || a == c || b == c)
        cout << "true\n";
    else if (a != b && a != c && b != c)
        cout << "false\n";
}