
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>


int main()
{
    int q;
    std::cin>>q;

    std::set<int>s;

    while(q--)
    {

        int x,y;

        std::cin>>x>>y;

        if(x==1){
            s.insert(y);
        }
        if(x==2){
            s.erase(y);
        }
        std::set<int>::iterator itr=s.find(y);



        if(x==3)
        {
            if(itr==s.end())
            {
                std::cout<<"No\n";
            }
            else
            {
                std::cout<<"Yes\n";
            }
        }



    }



    return 0;
}



