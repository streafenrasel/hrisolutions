//Rectangle Area in C++ - Hacker Rank Solution
#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 
/* Rectangle Area in C++ - Hacker Rank Solution START */

class Rectangle 
{
    public:
    int width, height;
    void display() 
    {
        cout << width << " " << height << "\n";
    }
};

class RectangleArea : public Rectangle 
{
    public:
    void read_input() 
    {
        cin >> width;
        cin >> height;
    }
    void display() 
    {
        cout << width * height << "\n";
    }
};

/* Rectangle Area in C++ - Hacker Rank Solution END */

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
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
