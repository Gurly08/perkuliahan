#include <iostream>
#include <fstream>

using namespace std;

int milih;
char kembali;


void read(){
    string nama;
    string nim;
    ifstream file ("soalgenap.txt");
    if(file.is_open())
    {
        while(! file.eof())
        {
            getline(file, nama);
            cout<<"Nama saya adalah " << nama << endl;
            getline(file, nim);
            cout<<"NIM saya adalah " << nim << endl;
        }
    }
}

void cread()
{
    string nama;
    string nim;
    ofstream file;
    file.open("soalgenap.txt", ios::app);
    cout << "Masukkan Nama: ";
    cin >> nama;
    file << nama;
    file << "\n";
    cout << "Masukkan NIM: ";
    cin >> nim;
    file << nim;
    file.close();
}

int main(){
    do{
        cout<<"=====Menu=====";
        cout<<"\n 1. Create ";
        cout<<"\n 2. Read ";
        cout<<"\n 3. Exit";
        cout<<"\nPilih : "; cin>>milih;

        switch(milih){
            case 1:
				cread();
                break;
            case 2:
                cout << "Daftar DATA\n";
				read();
                break;
            case 3:
                cout<<"\nTerima Kasih"<<endl;
                return 0;
            default:
                cout<<"Pilihan Salah"<<endl;
                break;
            }
            cout<<"Ingin memilih menu lain (y/t)? ";
            cin>>kembali;
            cout<<endl;
        }
        while (kembali!= 't');
        cout<<"Terima Kasih"<<endl;
    return 0;
}