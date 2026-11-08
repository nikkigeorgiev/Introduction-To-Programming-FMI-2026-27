#include <iostream>
using namespace std; 

int main()
{
    int n = 0;
    cin >> n; 

    int units = n % 10;
    int tens = n / 10;

    if (tens >= 10 && units != 0)
        return 1;

    if (n == 100)
        cout << "one hundred\n"; 
    if (tens > 1)
    { 
        switch (tens) {
        case 9:
            cout << "ninety ";
            break;
        case 8:
            cout << "eighty ";
            break;
        case 7:
            cout << "seventy ";
            break;
        case 6:
            cout << "sixty ";
            break;
        case 5:
            cout << "fifty ";
            break;
        case 4:
            cout << "forty ";
            break;
        case 3: 
            cout << "thirty "; 
            break; 
        case 2: 
            cout << "twenty ";
            break; 
        }
        switch (units) {
        case 1:
            cout << "one\n";
            break;
        case 2:
            cout << "two\n";
            break;
        case 3:
            cout << "three\n";
            break; 
        case 4:
            cout << "four\n";
            break;
        case 5:
            cout << "five\n";
            break;
        case 6:
            cout << "six\n";
            break;
        case 7:
            cout << "seven\n";
            break;
        case 8:
            cout << "eight\n";
            break;
        case 9:
            cout << "nine\n";
            break;
        }
        
    }

    if (tens == 1) 
    {
        switch (n) {
        case 10:
            cout << "ten\n";
            break;
        case 11:
            cout << "eleven\n";
            break;
        case 12:
            cout << "twelve\n";
            break;
        case 13:
            cout << "thirteen\n";
            break;
        case 14:
            cout << "fourteen\n";
            break;
        case 15:
            cout << "fifteen\n";
            break;
        case 16:
            cout << "sixteen\n";
            break;
        case 17:
            cout << "seventeen\n";
            break;
        case 18:
            cout << "eighteen\n";
            break;
        case 19:
            cout << "nineteen\n";
            break;
        }
    }
    if (tens == 0)
    {
        switch (units) {
        case 0: 
            cout << "zero\n"; 
            break; 
        case 1:
            cout << "one\n";
            break;
        case 2:
            cout << "two\n";
            break;
        case 3:
            cout << "three\n";
            break;
        case 4:
            cout << "four\n";
            break;
        case 5:
            cout << "five\n";
            break;
        case 6:
            cout << "six\n";
            break;
        case 7:
            cout << "seven\n";
            break;
        case 8:
            cout << "eight\n";
            break;
        case 9:
            cout << "nine\n";
            break;
        }
    }
