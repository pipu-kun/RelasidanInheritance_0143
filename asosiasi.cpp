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

class dokter{
    public:
        string nama;
        vector<pasien*> daftarPasien;

        dokter(string pnama) :nama(pnama){
            cout <<"dokter \""<<nama<<"\" ada"<<endl;
        }
        ~dokter(){
            cout <<"dokter \""<<nama<<"\" tidak ada"<<endl;
        }   

        void tambahPasien(pasien*);
        void cetakPasien();
};

void pasien::tambahDokter(dokter* pdokter){
    daftarDokter.push_back(pdokter);
}

void pasien::cetakDokter(){
    cout <<"daftar dokter yang merawat pasien " << this->nama << ":\n";
    
    for (int i = 0; i < daftarDokter.size(); i++){
        cout << "- " << daftarDokter[i]->nama << endl;
    }
    cout << endl;
}

void dokter::tambahPasien(pasien* ppasien){
    daftarPasien.push_back(ppasien);
}
void dokter::cetakPasien(){
    cout <<"daftar pasien yang dirawat oleh dokter " << this->nama << ":\n";
    
    for (auto& i : daftarPasien){ // fitur auto for loop
        cout << i->nama << endl;
    }
    cout << endl;
}

int main(){
    dokter* vardokter = new dokter("dr. Andi");
    dokter* vardokter2 = new dokter("dr. Budi");
    pasien* varpasien = new pasien("Siti");
    pasien* varpasien2 = new pasien("Joni");

    vardokter->tambahPasien(varpasien);
    vardokter->tambahPasien(varpasien2);
    vardokter2->tambahPasien(varpasien);

    vardokter->cetakPasien();
    vardokter2->cetakPasien();
    varpasien->cetakDokter();
    varpasien2->cetakDokter();

    delete vardokter;
    delete vardokter2;
    delete varpasien;
    delete varpasien2;

}