#ifndef ANAK_H
#define ANAK_H
#include <iostream>
#include <string>
using namespace std;


class anak{
    public:
        string nama;

        anak(string pnama) :nama(pnama){
            cout <<"anak \""<<nama<<"\" ada"<<endl;
        }
        ~anak(){
            cout <<"anak \""<<nama<<"\" tidak ada"<<endl;
        }

};

#endif // ANAK_H