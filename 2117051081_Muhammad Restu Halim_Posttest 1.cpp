#include <iostream>
using namespace std;

int main (){
	string npm, tanggal_lahir, bulan_lahir, tahun_lahir;
	
	cout << "====================INPUT===================="<< endl;
	

	cout << "Masukan NPM \t\t : "; getline (cin, npm);
	cout << "Masukan Tanggal Lahir \t : "; getline (cin, tanggal_lahir);
	cout << "Masukan Bulan Lahir \t : "; getline (cin, bulan_lahir);
	cout << "Masukan Tahun Lahir \t : "; getline (cin, tahun_lahir);
	
	cout << endl << endl;
	
	cout << "====================OUTPUT===================="<< endl;
	
	cout << " Username\t : " << npm << endl;
	cout << " Passwod\t : " << tahun_lahir << bulan_lahir << tanggal_lahir << endl;
	
return 0;
	
}
