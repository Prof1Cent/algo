#include <iostream>
using namespace std;
class Kalkulator{
    private :
        int a,b;

    public :
        void inputan(){
            cout<<"Masukkan Angka : ";
            cin>>a;
            cout<<"Masukkan Angka 2 : ";
            cin>>b;
        }

        int tambah(){
            return a+b;
        }
        int kurang(){
            return a-b;
        }
        int bagi(){
            return a/b;
        }
        int kali(){
            return a*b;
        }
};