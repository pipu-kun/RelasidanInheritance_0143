#include <iostream>
#include <string>
#include "ibu.h"
#include "anak.h"
using namespace std;

int main(){
    ibu* varIbu = new ibu("Siti");
    ibu* varIbu2 = new ibu("novia");
    anak* varAnak = new anak("budi");
    anak* varAnak2 = new anak("sari");
    anak* varAnak3 = new anak("joni");

    varIbu->tambahAnak(varAnak);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak;
    delete varAnak2;
    delete varAnak3;
}