/*
Deskripsi
Anda diminta untuk menuliskan semua bilangan yang terdiri atas N digit dan digit-digitnya merupakan permutasi dari 1,
 2, ..., N. Terdapat syarat tambahan: setiap bilangan haruslah mengikuti "aturan zig-zag" sebagai berikut. Untuk setiap
 tiga digit yang berurutan, salah satu kasus ini harus dipenuhi:

Digit yang di tengah lebih kecil daripada kedua digit lainnya.
Digit yang di tengah lebih besar daripada kedua digit lainnya.
Misalnya, bilangan 1423 memenuhi aturan zig-zag di atas. Akan tetapi, bilangan 1432 tidak memenuhi aturan tersebut.
 Jika N < 3, aturan zig-zag tidak perlu dipenuhi.

Format Masukan
Sebuah baris berisi sebuah bilangan bulat N.

Format Keluaran
Keluarkan semua kemungkinan bilangan memenuhi syarat, satu bilangan setiap baris. Keluaran harus terurut dari kecil ke
 besar.
*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <array>
using namespace std;

#define ll long long
#define FOR(a,s,e) for (ll a = s; a < e; ++a)
#define EACH(x,ar) for (auto x : ar)

ll n;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    ll arr[n];
    FOR(i,0,n) {
        arr[i] = i+1;
    }
    do {
        bool upToDown = arr[0] > arr[1];
        bool isValid = true;
        FOR(i,0,n-1) {
            if(arr[i+1] < arr[i] != upToDown) {
                isValid = false;
            } else {
                upToDown = !upToDown;
            }
        }
        if (isValid) {
            FOR(i,0,n) {
                cout << arr[i];
            }
            cout << "\n";
        }
    } while (next_permutation(arr, arr + n));

    return 0;
}

