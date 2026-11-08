#include <iostream>
using namespace std; 

bool isInUnion(char ch1, char ch2, char ch3, char ch4, char ch5); 

bool isInIntersection(char ch1, char ch2, char ch3, char ch4, char ch5); 

bool isInDifference(char ch1, char ch2, char ch3, char ch4, char ch5); 

bool isInSymmetricDifference(char ch1, char ch2, char ch3, char ch4, char ch5); 

char toLower(char letter); 

int max(char letter1, char letter2);

int min(char letter1, char letter2); 


int main()
{
    char ch1, ch2, ch3, ch4, ch5 = '\0'; 
    cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5; 

    cout << boolalpha << isInUnion(ch1, ch2, ch3, ch4, ch5) << ", "; 
    cout << boolalpha << isInIntersection(ch1, ch2, ch3, ch4, ch5) << ", "; 
    cout << boolalpha << isInDifference(ch1, ch2, ch3, ch4, ch5) << ", "; 
    cout << boolalpha << isInSymmetricDifference(ch1, ch2, ch3, ch4, ch5)
         << endl;
}

bool isInUnion(char ch1, char ch2, char ch3, char ch4, char ch5)
{
    if (ch5 >= min(min(ch1, ch2), min(ch3, ch4)) &&
        ch5 <= max(max(ch1, ch2), max(ch3, ch4)))
        return true;
    else
        return false; 
}

bool isInIntersection(char ch1, char ch2, char ch3, char ch4, char ch5)
{
    if (ch5 >= max(min(ch1, ch2), min(ch3, ch4)) &&
        ch5 <= min(max(ch1, ch2), max(ch3, ch4)))
        return true; 
    else return false; 
}

bool isInDifference(char ch1, char ch2, char ch3, char ch4, char ch5)
{
    if ((ch5 >= min(ch1, ch2) && ch5 <= max(ch1, ch2)) &&
        !(ch5 >= min(ch3, ch4) && ch5 <= max(ch3, ch4)))
        return true;
    else
        return false; 
}

bool isInSymmetricDifference(char ch1, char ch2, char ch3, char ch4, char ch5)
{
    return (isInUnion(ch1, ch2, ch3, ch4, ch5) &&
            !isInIntersection(ch1, ch2, ch3, ch4, ch5));
}

char toLower(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
        return letter + 32;
    else
        return letter; 
}

int max(char letter1, char letter2)
{
    if (toLower(letter1) >= toLower(letter2))
        return toLower(letter1);
    else
        return toLower(letter2); 
}

int min(char letter1, char letter2)
{
    if (toLower(letter1) <= toLower(letter2))
        return toLower(letter1);
    else return toLower(letter2); 
}
