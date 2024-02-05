#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long n, res=0;
    cin>>n;
    res = (n+1)/2;
    if(n%2!=0) res*=-1;
    cout<<res;

    return 0;
}
