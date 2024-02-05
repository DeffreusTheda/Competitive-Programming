#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int l, count=0;
    cin>>l;
    for(int i =0; i<l; ++i) {
        int q, p;
        cin>> p >> q;
        if(p+2<=q) ++count;
    }
    cout<<count;

    return 0;
}
