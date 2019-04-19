#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Pekerjaan;

class Karyawan{
private :
    string nama;
    vector <Pekerjaan *> nama_pekerjaan;
    void tmbhPekerjaan(Pekerjaan *pek);
public :
    Karyawan(string knama):nama(knama){

    }
    friend std::ostream& operator<<(std::ostream &out, const Karyawan &kar);
	std::string getName() const { return nama; }

    friend class Pekerjaan;
};

class Pekerjaan{
private :
    string nama;
    vector <Karyawan *> nama_kar;
public:
    Pekerjaan(string pnama):
        nama(pnama){}
    void tmbhKaryawan(Karyawan *kar){
        nama_kar.push_back(kar);
        kar->tmbhPekerjaan(this);
    }
    friend std::ostream& operator<<(std::ostream &out, const Pekerjaan &pek){
    unsigned int length = pek.nama_kar.size();

    if(length==0){
        cout<<pek.nama<<"Tak Ada Pekerjaan";
        //return 0;
    }
    cout<<pek.nama;
    for(unsigned int count =0; count<length; count++)
        cout<<pek.nama_kar[count]->getName()<<" ";
        return out;
    }
    string getName() const{
        return nama;
    }
};
void Karyawan::tmbhPekerjaan(Pekerjaan *pek){
    nama_pekerjaan.push_back(pek);
}

std::ostream& operator<<(std::ostream &out, const Karyawan &kar){
    unsigned int length = kar.nama_pekerjaan.size();
    if (length==0){
        cout<<kar.getName()<<"Tak Ada Karyawan";
        return out;
    }
    cout<<kar.nama;
    for(unsigned int count = 0; count<length; count++)
        cout<<kar.nama_pekerjaan[count]->getName()<<" ";
    return out;
}
int main(){
    Karyawan *k1 = new Karyawan("Riyanwar");

    Pekerjaan *p1 = new Pekerjaan("Programmer");

    k1->tmbhPekerjaan(p1);

    cout<<*d1<<*p1;

    return 0;
}
