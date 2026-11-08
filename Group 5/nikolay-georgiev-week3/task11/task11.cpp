#include <iostream>
using namespace std; 

bool isInNumsUnion(int a, int b, int c, int d, int e);

bool isInNumsIntersection(int a, int b, int c, int d, int e);

bool isInNumsDifference(int a, int b, int c, int d, int e); 

bool isFromOneSet(int a, int b, int c, int d, int e); 

int max(int num1, int num2); 

int min(int num1, int num2); 


int main()
{
	int a, b, c, d, e; 

	std::cin >> a >> b >> c >> d >> e; 

    cout << boolalpha << isInNumsUnion(a, b, c, d, e) << ", "; 
    cout << boolalpha << isInNumsIntersection(a, b, c, d, e) << ", "; 
    cout << boolalpha << isInNumsDifference(a, b, c, d, e) << ", "; 
    cout << boolalpha << isFromOneSet(a, b, c, d, e) << "\n"; 
}

bool isInNumsUnion(int a, int b, int c, int d, int e)
{
    if (e <= max(max(a, b), max(c, d)) && e >= min(min(a, b), min(c, d)))
        return true;
    else
        return false; 
}

bool isInNumsIntersection(int a, int b, int c, int d, int e)
{
    if (e >= max(min(a, b), min(c, d)) && e <= min(max(a, b), max(c, d)))
        return true; 
    else return false; 
}

bool isInNumsDifference(int a, int b, int c, int d, int e)
{
    if ((e >= min(a, b) && e <= max(a, b)) &&
        !(e >= min(c, d) && e <= max(c, d)))
        return true; 
        else return false; 
}

bool isFromOneSet(int a, int b, int c, int d, int e)
{
    return (isInNumsUnion(a, b, c, d, e) && !isInNumsIntersection(a, b, c, d, e));
}

int max(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2; 
}

int min(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    else
        return num2;
}