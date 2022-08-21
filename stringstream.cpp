#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function
    vector <int> x;
    stringstream ss(str);

    int numbers;
    char comma;

    while(ss>>numbers)
    {
        x.push_back(numbers);
        ss>>comma;
    }


    return x;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
