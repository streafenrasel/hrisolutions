//Print Pretty in C++ - Hacker Rank Solution
#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) 
	{
	    double A; cin >> A;
	    double B; cin >> B;
	    double C; cin >> C;

	/* Enter your code here */
	    /* Print Pretty in C++ - Hacker Rank Solution START */
            cout << std::hex << std::left << std::showbase << std::nouppercase; 
            cout << (long long) A << endl;

            cout << std::dec << std::right << std::setw(15) << std::setfill('_') << std::showpos << std::fixed << std::setprecision(2); 
            cout << B << endl;

            cout << std::scientific << std::uppercase << std::noshowpos << std::setprecision(9); 
            cout << C << endl;
         /* Print Pretty in C++ - Hacker Rank Solution END */

	}
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
