# Program-menghitung-bangun-cpp
Program menghitung bangun dengan C++

### Menghitung Luas Persegi

```c++ 

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
    } // program menghitung luas persegi

```

### Menghitung luas trapesium

```c++

#include <iostream>
using namespace std;
int main(){
	//Dekalarasi variabel tipe data
	int a,b,t;
	float l;
	
	cout<<"Program C++ Menghitung Luas Trapesium"<<endl;
	cout<<"--------X TKJ 1------"<<endl;
	//proses input nilai sisi atas, bawah dan tinggi
	cout<<"Masukan sisi a  : ";
	cin>>a;
	
	cout<<"Masukan sisi b  : ";
	cin>>b;
	
	cout<<"Masukan tinggi  : ";
	cin>>t;
	
	//hitung rumus luas trapesium
	l=(0.5*(a+b)*t);
	
	//Tampilkan luas
	cout<<"Luas trapesium  : "<<l<<endl;
	
	return 0;	
}

```
