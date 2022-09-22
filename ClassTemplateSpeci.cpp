#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

// Define specializations for the Traits class template here.
template <> 
struct Traits<Fruit>{
    static string name(int index){
        switch(index){
                case 0:return "apple";
                case 1: return "orange" ;
                case 2: return "pear";
        }  
        return "unknown";
    } 
};
template <> 
struct Traits<Color>{
    static string name(int index){
        switch(index){
                case 0:return "red";
                case 1: return "green" ;
                case 2: return "orange";           
        }
        return "unknown";  
    } 
};


int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
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
