/*
 Deskripsi
 Quadtree adalah suatu struktur data yang dapat dipergunakan untuk mengkodekan isi suatu citra biner. Perhatikan matriks
 biner berikut, yakni matriks yang setiap elemennya berisi 2 kemungkinan nilai. Bagian bernilai 0 diberi warna putih
 dan bagian bernilai 1 diberi warna abu-abu.

 Jika matriks tersebut dibagi menjadi empat kuadran persegi yang sama dimensinya, yaitu kuadran kiri atas, kanan atas,
 kiri bawah, dan kanan bawah, maka kuadran kiri atas berisi nilai-nilai yang sama (homogen), sementara kuadran lainnya
 tidak homogen. Kuadran yang homogen tidak perlu dilakukan pembagian lagi. Untuk setiap kuadran yang tidak homogen,
 dilakukan pembagian lebih lanjut menjadi 4 kuadran yang lebih kecil, dan seterusnya, sehingga akan terbentuk
 submatriks-submatriks homogen sebagai berikut.

 Tentu, kuadran terkecil yakni kuadran tidak dapat dipecah lagi yang mungkin adalah elemen matriks itu sendiri.
 Sedangkan, kuadran terbesar yang homogen adalah seluruh matriks tersebut, seandainya semua elemen bernilai sama.
 Karena proses pemecahan ini selalu membagi matriks menjadi 4 bagian yang sama besar, maka matriks haruslah berbentuk
 bujur sangkar berukuran 2P × 2P untuk suatu bilangan bulat P.

 Anda ditugaskan untuk melakukan pengkodean atas kuadran-kuadran tersebut. Aturan kode suatu kuadran:

 Digit pertama menyatakan nilai dari kuadran yang homogen tersebut. Karena elemen-elemen matriks bernilai biner maka
 hanya ada dua nilai: 0 atau 1.
 Digit-digit berikutnya menyatakan kode lokasi sebagai berikut:
 Pada sekali pembagian menjadi 4 kuadran, masing-masing kuadran dinomori sebagi berikut: 0 untuk kiri atas, 1 untuk
 kanan atas, 2 untuk kiri bawah, dan 3 untuk kanan bawah.
 Pembagian berikutnya sama dengan pembagian sebelumnya, dan digit yang baru dituliskan pada posisi setelah digit
 sebelumnya. Misalnya, pada contoh di atas, kuadran berkode 1 dipecah ke dalam kuadran berkode 10 dan 11 yang homogen
 bernilai 0, dan kuadran berkode 12 dan 13 yang homogen bernilai 1.
 Dengan aturan pengkodean ini, contoh matriks di atas dapat dikodekan seperti pada gambar berikut.

 Buatlah program yang mengeluarkan kode-kode setiap kuadran homogen bernilai 1 dari suatu matriks biner berukuran R
 baris dan C kolom. Jika ukuran matriks tidak tepat bernilai 2P × 2P, Anda perlu memperluas matriks tersebut menjadi
 ukuran 2P × 2P dengan nilai P sekecil mungkin, dengan menambahkan baris-baris bernilai 0 di bawah matriks, dan
 kolom-kolom bernilai 0 di sebelah kanan matriks semula.


 Format Masukan
 Baris pertama berisi dua buah bilangan bulat R dan C. R baris berikutnya masing-masing berisi C digit yang menyatakan
 baris-baris matriks tersebut.


 Format Keluaran
 Baris pertama berisi sebuah bilangan bulat, yaitu banyaknya kuadran homogen bernilai 1.

 Baris-baris selanjutnya berisi kode-kode dari kuadran-kuadran homogen bernilai 1, dengan masing-masing kode dituliskan
 pada baris berbeda dan terurut secara leksikografi (urutan dalam kamus). Ingat bahwa kuadran yang sudah homogen tidak
 boleh dipecahkan.
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
#define PB(a) push_back(a)

typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;

ll R, C;
vs res;

int isHomogenous(vvi vv) {
    ll first = vv[0][0];
    EACH(i,vv)
        EACH(j,i)
            if (i[j] != first)
                return first == 1 ? 1 : 0;
    return -1;
}

void search(vvi vv, ll sx, ll sy, ll fx, ll fy, string code) {
    
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> R >> C;
    ll ar = 2, ac = 2;
    while (ar < R && ac < C) {
        ar *= 2;
        ac *= 2;
    }
    vector<vi> arr;
    FOR(i,0,R)
        FOR(j,0,C) {
            ll tmp;
            cin >> tmp;
            arr[i].PB(tmp);
        }
    FOR(i,R-1,ar-1)
        FOR(j,C-1,ac-1)
            arr[i].PB(0);
    search(arr, "");


    return 0;
}

