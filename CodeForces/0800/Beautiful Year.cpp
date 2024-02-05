#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool run = true;
    string y;
    cin>>y;
    y = to_string(stoi(y)+1);
    while(run) {
        run  =false;
        for(size_t i=0; i < 3; ++i) {
            for(size_t j=i+1; j<4; ++j) {
                if(y[i] == y[j]) {
                    run = true;
                }
            }
        }
        if(run) {
            y = to_string(stoi(y)+1);
        } else {
            cout<<y;
            return 0;
        }
    }
}
