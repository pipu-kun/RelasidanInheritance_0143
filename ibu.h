#ifndef IBU_H
#define IBU_H
#include <iostream>
#include <string>
#include <vector>
#include "anak.h"
using namespace std;

class ibu{
    public:
        string nama;
        vector<anak*> list_anak;

        ibu(string pnama) :nama(pnama){
            cout <<"ibu \""<<nama<<"\" ada"<<endl;
        }
        ~ibu(){
            cout <<"ibu \""<<nama<<"\" tidak ada"<<endl;
        }
        void tambahAnak(anak*);
        void cetakAnak();
};

void ibu::tambahAnak(anak* panak){
    list_anak.push_back(panak);
}

void ibu::cetakAnak(){
    cout <<"daftar anak dari ibu " << this->nama << ":\n";
    
    for (int i = 0; i < list_anak.size(); i++){
        cout << "- " << list_anak[i]->nama << endl;
    }
    cout << endl;
}

#endif // IBU_H