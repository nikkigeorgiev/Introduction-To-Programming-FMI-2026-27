#include <iostream>
using namespace std; 

bool isLeepYear(int year);

int main()
{
    int day = 1; 
    int month = 1; 
    int year = 1; 

    cin >> day >> month >> year; 

    if (day == 31 && month == 12) {
        year++;
    }

    switch (month)
    { 
        case 2:
            if ((isLeepYear(year) == 1 && day == 29) ||
                isLeepYear(year) == 0 && day == 28)
                month++;
                day = 1; 
                break;
            if ((isLeepYear(year) == 0 && day == 29))
                    cout << "Error! Please enter valid date!";
                break; 

        case 4:
        case 6:
        case 9:
        case 11: 
            if (day == 30)
                month++;
                day = 1; 
            break;
 
        case 1:
        case 3: 
        case 5: 
        case 7:
        case 8: 
        case 10:
            if (day == 31)
                month++; 
                day = 1; 
            break; 

        case 12: 
            if (day == 31)
                month = 1;
                day = 1; 
            break; 

        default:
            day++; 
            break;
    }

    cout << day << " " << month << " " << year;
}

bool isLeepYear(int year)
{
    if ((year % 100 == 0 && year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false; 
}
