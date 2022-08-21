#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n,q,y;
    std::cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {

        std::cin>>arr[i];

    }
    std::vector<int> v(arr,arr+n);

    std::vector<int>::iterator low;

    std::cin>>q;

    for(int i = 0 ; i<q; i++)
    {
        int a;

        std::cin>>a;
        low = std::lower_bound (v.begin(), v.end(), a);

        if(v[low-v.begin()]!=a){
            std::cout << "No " << (low - v.begin())+1 << '\n';
        }else {

            std::cout << "Yes " << (low - v.begin())+1 << '\n';

        }

    }



    return 0;
}

