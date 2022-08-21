#include <iostream>
#include <string>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

    string unknown = "unknown";
    string apple = "apple";
    string orange = "orange";
    string pear = "pear";
    string red = "red";
    string green = "green";

template<>
struct Traits<Fruit>
{
public:
    static string name(int a)
    {
        if(a==0)
            return apple;
        else if (a==1)
            return orange;
        else if (a==2)
            return pear;
        else
            return unknown;
    }


};
template<>
struct Traits<Color>
{
public:


 static string name(int a)
    {
        if(a==0)
            return red;
        else if (a==1)
            return green;
        else if (a==2)
            return orange;
        else
            return unknown;
    }



};


int main()
{
    int t = 0;
    std::cin >> t;

    for (int i=0; i!=t; ++i)
    {
        int index1;
        std::cin >> index1;
        int index2;
        std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
