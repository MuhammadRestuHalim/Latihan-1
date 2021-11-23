#include <iostream>
using namespace std;

int main(){
	string nama;
	string alamat;
	string email;
	string nomor;
	
	cout<<"Nama Pelanggan :";
	getline(cin,nama);
	cout<<"Alamat Rumah   :";
	getline(cin,alamat);
	cout<<"Email Pelanggan:";
	cin>>email;
	cout<<"Nomor Telepon  :";
	cin>>nomor;


    cout<<"Nama Pelanggan   : "<<nama<<endl;
    cout<<"Alamat Rumah     : "<<alamat<<endl;
    cout<<"Email Pelanggan  : "<<email<<endl;
    cout<<"Nomor Telepon    : "<<nomor<<endl; 
	
	return 0;
	
}
