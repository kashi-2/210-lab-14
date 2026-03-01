#include <iostream>
#include <iomanip>
using namespace std;



    // Named constants 
    const int MIN_RGB = 0;
    const int MAX_RGB = 255;

    //Class defination along with private data and prototypes
    class Color
    {
    private:
        int red;
        int green;
        int blue;
    //constructors
        public:
        Color();
        Color(int r, int g, int b);

        //setters
        void setRed(int r);
        void setGreen(int g);
        void setBlue(int b);

        //getters
        int getRed() const;
        int getGreen() const;
        int getBlue() const;

        //Utility func
        void print() const;
    
    };
//main() -Test the class
int main()
{
    cout << "===== Color Objects =====\n\n";

    //Color objects
    Color color1;
    Color color2(255, 0, 0);
    Color color3(0, 255, 0);
    Color color4(0, 0, 255);

    //Populating first color using setters
    color1.setRed(128);
    color1.setGreen(64);
    color1.setBlue(192);

    //printing table header
    cout << left << setw(10) << "Color" << setw(10) << "Red" << setw(10) << "Green" << setw(10) << "Blue" << endl;
    
    cout << "----------------------------------\n";

    cout << setw(10) << "Color1";
    color1.print();

    cout << setw(10) << "Color2";
    color2.print();

    cout << setw(10) << "Color3";
    color3.print();

    cout << setw(10) << "Color4";
    color4.print();

    return 0;
}