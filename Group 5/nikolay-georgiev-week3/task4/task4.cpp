#include <iostream>
using namespace std; 

int minNumber(int num1, int num2, int num3);

int middleNumber(int num1, int num2, int num3); 

int maxNumber(int num1, int num2, int num3); 

int main()
{
	int a, b, c; 
	cin >> a >> b >> c; 

    cout << minNumber(a, b, c) << " "; 
	cout << middleNumber(a, b, c) << " "; 
    cout << maxNumber(a, b, c) << " ";
}

int minNumber(int num1, int num2, int num3)
{
	int min = INT_MAX;
    if (num1 < min)
        min = num1; 
	if (num2 < min)
        min = num2; 
	if (num3 < min)
        min = num3;
	return min; 
}

int maxNumber(int num1, int num2, int num3)
{
    int max = INT_MIN; 
	if (num1 > max)
        max = num1; 
	if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
	return max; 
}

int middleNumber(int num1, int num2, int num3)
{
    if (num1 > minNumber(num1, num2, num3) &&
        num1 < maxNumber(num1, num2, num3))
        return num1;
    else if (num2 > minNumber(num1, num2, num3) &&
             num2 < maxNumber(num1, num2, num3))
        return num2; 
	else if (num3 > minNumber(num1, num2, num3) &&
             num3 < maxNumber(num1, num2, num3))
        return num3;
}