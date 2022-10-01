//Cpp exception handling in C++ - Hacker Rank Solution
#include <iostream>
#include <stdexcept>

using namespace std;

int largest_proper_divisor(int n) 
{
    if (n == 0) 
    {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if (n == 1) 
    {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    for (int i = n/2; i >= 1; --i)
    {
        if (n % i == 0) 
        {
            return i;
        }
    }
    return -1; // will never happen
}
/* Cpp exception handling in C++ - Hacker Rank Solution START */
void process_input(int n) 
{
    try{
    int d = largest_proper_divisor(n);
    cout << "result=" << d << endl;
    }
    catch(invalid_argument& e)
    {
        cout << e.what() << endl;
    }
    cout << "returning control flow to caller" << endl;
}
/*Cpp exception handling in C++ - Hacker Rank Solution END */

int main() 
{
    int n;
    cin >> n;
    process_input(n);
    return 0;
}

/*
________STREAFEN_0101_RASEL__
________STREAFEN_0101_RASEL__
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
________STREAFEN_0101_RASEL__
________STREAFEN_0101_RASEL__
_____010101_____________________
_0101010101010__________________
010101010101010_________________
01010101010101011_______________
01010101010101010_______________
01010101010101010101010101______
01010101010101010101010101010___
0101010100101010101010101010101_
01010101010101010101010101010101
010101010101010101010101010__01_
01010101010101010100101010101___
01010100101010010101010101______
01010101010101010101010_________
1010101010101010101_____________
01010101010101__________________
101010101_______________________
010101__________________________
10______________________________
*/
