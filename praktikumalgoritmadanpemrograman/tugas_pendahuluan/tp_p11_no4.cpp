#include <iostream>
#include <string>

using namespace std;

struct mahasiswa{
    string nama, jurusan;
    float ipk;
};

int main(){
    mahasiswa mhs;
    mhs.nama="Ryanda Deanova";
    mhs.jurusan="Teknik Informatika";
    mhs.ipk=4.0;
    
    cout<<"DATA MAHASISWA"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Nama    : "<<mhs.nama<<endl;
    cout<<"Jurusan : "<<mhs.jurusan<<endl;
    cout<<"IPK     : "<<mhs.ipk<<endl;

}
