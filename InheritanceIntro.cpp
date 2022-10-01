//Inheritance Introduction in C++ - Hacker Rank Solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle
{
    public:
    	void triangle()
    	{
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle
{
    public:
    	void isosceles()
    	{
    		cout<<"I am an isosceles triangle\n";
    	}
  	//Write your code here.
  	/* Inheritance Introduction in C++ - Hacker Rank Solution START */
        void description()
        {
            cout << "In an isosceles triangle two sides are equal" << endl;
        }
        /* Inheritance Introduction in C++ - Hacker Rank Solution END */
};

int main()
{
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
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
