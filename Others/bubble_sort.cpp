#include <iostream>
using namespace std;

int N;

int main() {
    cin >> N;
    string arr[N+5];
    for(int n = 0; n<N; n++) {
        cin >> arr[n];
    }
    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            
            /*for(int q = 1; q <= 0; q--) {
                unsigned int la = sizeof(arr[i])-q, lb = sizeof(arr[j])-q;
                if(arr[i][la] < arr[j][lb]) {
                    string tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                } 
            }*/
        }
    }
    for(int i = 0; i < N; i++) {
        cout << arr[i] << "\n";
    }
}