#include <iostream>
using namespace std; 

int main()
{
    int n, m, l = 0;  
    int max = INT_MIN;  
    cin >> n;
    cin >> m;
    cin >> l; 
     
    if (n > m && n > l) {
        max = n;
    } 
    else if (m > n && m > l) {
        max = m;
    } 
    else if (l > n && l > m) {
        max = l;
    } 
    else if (n = m || n == l || m == l) {
        cout << "There are more than one maximal numbers!\n";
        return 0;
    }
    cout << max; 
}