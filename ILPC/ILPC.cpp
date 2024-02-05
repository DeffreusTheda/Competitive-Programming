#include<iostream>
#include<vector>

using namespace std;

bool win(int n, int m){
    int prime[10] = {2,3,5,7,11,13,17,19,23,29};
    vector<bool> dp(n + 1, false);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            if (prime[j] <= i && !dp[i - prime[j]]) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, m;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        if(win(n, m)){
            cout << "Udin";
            if (i != t-1) cout << "\n";
        }
        else{
            cout << "Idin";
            if (i != t-1) cout << "\n";
        }
    }

    return 0;
}