#include <iostream>

using namespace std;

void Kurang(){
	int a;
	int b;
	int c;
	cout << "Pengurangan \n";
	cout << " \n";
	cin >> a;
	cout << " \n";
	cin >> b;
	cout <<"Hasil \n";
	c = a - b;
	cout << c;
}
void Tambah(){
	int a;
	int b;
	int c;
	cout << "Pertambahan \n";
	cout << " \n";
	cin >> a;
	cout << " \n";
	cin >> b;
	cout <<"Hasil \n";
	c = a + b;
	cout << c;
}
void Kali(){
	int a;
	int b;
	int c;
	cout << "Perkalian \n";
	cout << " \n";
	cin >> a;
	cout << " \n";
	cin >> b;
	cout <<"Hasil \n";
	c = a * b;
	cout << c;
}
int main(){
	int p;
	cout << "Calculator \n";
	cout << "1 | Perkalian \n";
	cout << "2 | Pertambahan \n";
	cout << "3 | Pengurangan \n";
	cout << "Pilih Salah Satu \n";
	cin >> p;
	if(p == 1){
		Kali();
	}
	else if(p ==2){
		Tambah();
	}
	else if(p == 3){
		Kurang();
	}
	else{
		cout << "Pilih Yang Bener";
	}
	return 1;
}
