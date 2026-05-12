#ifndef ANAK_H
#define ANAK_H


class anak{
    public:
        string nama;

        anak(string pnama) :nama(pnama){
            cout <<"anak \""<<nama<<"\" ada"<<endl;
        }
        ~anak(){}

};

#endif // ANAK_H