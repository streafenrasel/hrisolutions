//Maps-STL in C++ - Hacker Rank Solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    /*Maps-STL in C++ - Hacker Rank Solution START */  
    map <string,int> m;
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int q = 0;
        cin>>q;
        string x;
        if (q == 1)
        {
            int y = 0;
            cin>>x;
            cin>>y;
            m[x] += y;
        }
        else if (q == 2)
        {
            cin>>x;
            m.erase(x);
        }
        else
        {
            cin>>x;
            map<string,int>::iterator itr=m.find(x);
            if (itr != m.end())
                cout<<m[x]<<endl;
            else
                cout<<0<<endl;
        }
    }
    /* Maps-STL in C++ - Hacker Rank Solution END */
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
