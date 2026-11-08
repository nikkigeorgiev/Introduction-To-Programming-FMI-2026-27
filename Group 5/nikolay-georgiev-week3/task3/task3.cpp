#include <iostream>
using namespace std; 

int main()
{
    int n, m;
    cin >> n >> m; 

    int sum = n + m; 
    int multi = n * m;
    int sub = n - m; 
    int div = n / m; 
      

    if (sum > multi && sum > sub && sum > div) {
        cout << sum << endl; 
    }
    else if (multi > sum && multi > sub && multi > div) {
        cout << multi << endl; 
    }
    else if (sub > multi && sub > sum && sub > div) {
        cout << sub << endl; 
    }
    else if (div > multi && div > sub && div > sum) {
        cout << div << endl; 
    }
}