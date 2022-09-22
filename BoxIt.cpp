#include<bits/stdc++.h>

using namespace std;
class Box 
{
    private:
    //l,b,h are integers representing the dimensions of the box
    int length, breadth, height;
    public:
    // Constructors: 
    // Box();
    Box() 
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    // Box(int,int,int);
    Box(int l, int b, int h) 
    {
        length = l;
        breadth = b;
        height = h;
    }
    // Box(Box);
    Box(const Box &B) 
    {
        length = B.length;
        breadth = B.breadth;
        height = B.height;
    }
    // int getLength(); // Return box's length
    int getLength() 
    {
        return length;
    }
    // int getBreadth (); // Return box's breadth
    int getBreadth() 
    {
        return breadth;
    }
    // int getHeight ();  //Return box's height
    int getHeight() 
    {
        return height;
    }
    // long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume() 
    {
        return (long long)(breadth) * length * height;
    }
    //Overload operator < as specified
    //bool operator<(Box& b)
    bool operator<(Box &B) 
    {
        if (length < B.length) 
        {
            return true;
        } 
        else if (length == B.length) 
        {
            if (breadth < B.breadth) 
            {
                return true;
            } 
            else if (breadth == B.breadth) 
            {
                if (height < B.height) 
                {
                return true;
                }
            }
        }

        return false;
    }
};
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
ostream &operator<<(ostream &out, Box &B) 
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
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
