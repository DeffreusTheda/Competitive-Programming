#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int l, cnt=1;
    string now;
    cin>>l>>now;
    for(int i=1; i<l; ++i) {
        string tmp;
        cin>>tmp;
        if(now!=tmp) {
            ++cnt;
            now = tmp;
        }
    }
    cout<<cnt;

    return 0;
}
