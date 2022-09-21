#include <bits/stdc++.h>
using namespace std;
int main()
{
    
//define
int n, q,i;
//input
cin>>n>>q;
string temp; //hrml_define_strings_to_put_in
vector<string> hrml;
vector<string> quer;
cin.ignore();
for(i=0;i<n;i++)
{
    getline(cin,temp);
    hrml.push_back(temp);
}
for(i=0;i<q;i++)
{
    getline(cin,temp);
    quer.push_back(temp);
}
map<string, string> m;
vector<string> tag;
for(i=0;i<n;i++)
{
    //hrml array_add_remove
    temp=hrml[i];
    temp.erase(remove(temp.begin(), temp.end(), '\"' ),temp.end());
    temp.erase(remove(temp.begin(), temp.end(), '>' ),temp.end());
    if(temp.substr(0,2)=="</")
    {
        tag.pop_back();
    }
    else
    {
        stringstream ss;
        ss.str("");
        ss<<temp;
        string t1,p1,v1;
        char ch;
        ss>>ch>>t1>>p1>>ch>>v1;
        string temp1="";
        //checking size
        if(tag.size()>0)
        {
            temp1=*tag.rbegin();
            temp1=temp1+"."+t1;
        }
        //backway
        else
            temp1=t1;
        tag.push_back(temp1);
        m[*tag.rbegin()+"~"+p1]=v1;
        while(ss)
        {
            ss>>p1>>ch>>v1;
            m[*tag.rbegin()+"~"+p1]=v1;
        }
    }
}
for(i=0;i<q;i++){
    if (m.find(quer[i]) == m.end())
        cout << "Not Found!\n";
    else
        cout<<m[quer[i]]<<endl;
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
