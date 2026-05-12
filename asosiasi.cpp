#include <iostream>
#include <string>
#include <vector>
using namespace std;

class dokter;

class pasien{
    public:
        string nama;
        vector<dokter*> daftarDokter;

        pasien(string pnama) :nama(pnama){
            cout <<"pasien \""<<nama<<"\" ada"<<endl;
        }

        ~pasien(){
            cout <<"pasien \""<<nama<<"\" tidak ada"<<endl;
        }
        void tambahDokter(dokter*);
        void cetakDokter();
};