#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class Karyawan{
    public : char nama[999];
    public : char alamat[999];
    public : char pekerjaan[999];
};

class Programmer : public Karyawan {
    public : int nip;
};

int main(){
    Programmer pr;
    cout<<"Masukan Nomor Pekerja : ";
    cin>>pr.nip;
    cin.ignore();
    cout<<"Masukan nama : ";
    cin.getline(pr.nama,100);
    cout<<"Masukan Alamat : ";
    cin.getline(pr.alamat,100);
    cout<<"Masukan Pekerjaan : ";
    cin.getline(pr.pekerjaan,100);
    cout<<endl;
    system("cls");
    cout<<pr.nip<<endl;
    cout<<pr.nama<<endl;
    cout<<pr.alamat<<endl;
    cout<<pr.pekerjaan<<endl;

    getch();
}
