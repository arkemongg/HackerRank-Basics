#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    std::cin>>n;
    std::vector<int> v;

    for(int i = 0 ; i < n; i++)
    {
        int a;
        std::cin>>a;
        v.push_back(a);
    }
    int q1,r1,r2;

    std::cin>>q1>>r1>>r2;

    v.erase(v.begin()+(q1-1));
    v.erase(v.begin()+(r1-1),v.begin()+(r2-1));

    int size = v.size();
    std::cout<<size<<std::endl;
     for(int i = 0 ; i < size; i++)
    {
        std::cout<<v[i]<<" ";
    }

    return 0;
}
