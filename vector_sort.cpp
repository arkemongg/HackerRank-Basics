
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    std::vector<int> v;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        v.push_back(a);
    }
    std::sort(v.begin(),v.end());

    for (int i = 0; i < n; i++) {
        std::cout << v[i]<<" ";
    }



    return 0;
}
