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
