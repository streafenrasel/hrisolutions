//Sets-STL in C++ - Hacker Rank Solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    /* Sets-STL in C++ - Hacker Rank Solution START */
    set <int> s;
    int N = 0, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        int q = 0, x = 0;
        cin >> q;
        cin >> x;
        if (q == 1)
        {
            s.insert(x);
        }
        else if (q == 2)
        {
            s.erase(x);
        }
        else
        {
            set<int>::iterator itr=s.find(x);
            if (itr == s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    /* Sets-STL in C++ - Hacker Rank Solution END */ 
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
