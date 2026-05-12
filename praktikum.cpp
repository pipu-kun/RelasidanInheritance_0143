#include <iostream>
#include <string>
using namespace std;

class member{ 
    public:
        int id;
        string email;
        string nama;
        string status;

        void showProfile(){
            cout << "ID: " << id << endl;
            cout << "Nama: " << nama << endl;
            cout << "Email: " << email << endl;
            cout << "Status: " << status << endl;
        }
};

class admin{
    public:
        void showAllMembers(member members[], int size){
            cout << "Daftar Member:\n";
            for (int i = 0; i < size; i++){
                members[i].showProfile();
                cout << "-------------------\n";
            }
        }

        void toggleActivation(member &m){
            if (m.status == "active"){
                m.status = "inactive";
            } else {
                m.status = "active";
            }
        }
};

class user{
    public:
        int id;
        string nama;
        string email;

        void generateID(){
            id = rand() % 1000 + 1; // pake random akhirnya
        }
};

int main(){
    admin admin1;
    member members[3];

    for (int i = 0; i < 3; i++){
        members[i].id = i + 1;
        members[i].nama = "Member" + to_string(i + 1);
        members[i].email = "member" + to_string(i + 1) + "@example.com";
        members[i].status = "active";
    }

    admin1.showAllMembers(members, 3);
    admin1.toggleActivation(members[1]);
}
