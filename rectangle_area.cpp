
#include <iostream>


/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
public:
    int w,h;


    void display()
    {

        std::cout<<w<<" "<<h<<std::endl;

    }


};

class RectangleArea : public Rectangle
{
private:

public:
    void read_input()
    {

        std::cin>>w>>h;

    }
    void display()
    {

        std::cout<<w*h<<std::endl;

    }


};


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
