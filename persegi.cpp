#include <iostream>
using namespace std;
int main(){
    int s; // tipe data s adalah integer
    int hasil; // nilai hasil integer
    cout << "===================\n";
    cout << "|Program menghitung|\n";
    cout << "|Luas persegi\t|\n";
    cout << "===================\n";
    cout << "| X TKJ 1 | RAPAWA |\n";
    cout << "Masukan sisi : "; // input
    cin >> s; // masukan input ke var s
    hasil = s * s; // rumus persegi
    // cetak hasil s x s = hasil
    cout <<"Luas persegi : " << s * s << endl;
    cin.get(); // mengambil cin
    return 0; // program berhenti
    // program menghitung luas persegi
