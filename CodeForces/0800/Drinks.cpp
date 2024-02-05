#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    double n, res=0;
    cin>>n;
    for(double i =0; i<n; ++i) {
        double tmp;
        cin>>tmp;
        res += tmp;
    }
    printf("%.12f", res/n);

    return 0;
}
