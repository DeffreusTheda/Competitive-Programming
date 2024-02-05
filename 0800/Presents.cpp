#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    cin>>n;
    vector<int> r(n);
    for(int i =0; i<n; ++i) {
        int tmp;
        cin>>tmp;
        r[tmp-1] = 1+i;
    }
    for(size_t i=0; i<n; ++i) {
        cout<<r[i];
        if(i != n-1) cout<<" ";
    }

    return 0;
}
