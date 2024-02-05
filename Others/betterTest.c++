#include <iostream>
#include <cmath>
#include <fstream> // allow us to work with files. Need <iostream>.
using namespace std;
// Muhammad Alfin Azza Pujaar / X5 / 25th of August, 2023

int main() {
    int a; int b; int c;
    cin >> a >> b >> c;
    double D = (b*b)-(4*a*c);
    int xSatu; int xDua;

    //kurang paham soalnya pak :p

    if (D < 0) {
    cout << "Tidak memiliki akar real 'Imajiner'";

    } else if (D > 0 && xSatu != xDua) {
    int xSatu = (-b + sqrt(D))/2*a;
    int xDua = (-b - sqrt(D))/2*a;
    cout << xSatu << endl << xDua << endl;
    cout << "Dua akar real berbeda";

    } else if (D == 0 && xSatu == xDua) { 
    int xSatu = (-b + sqrt(D))/2*a;
    int xDua = (-b - sqrt(D))/2*a;
    cout << xSatu << endl << xDua << endl;
    cout << "Dua akar kembar atau hanya memiliki satu akar real";
    }  
}