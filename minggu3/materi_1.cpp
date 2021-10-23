#include <iostream>

using namespace std;

class hitung{
    private:
    int a, b, c;
    public:
    void assign(int d, int e, int f){
        a=d;
        b=e;
        c=f;
    }
    int tambah(){
        return a+b+c;
    }
    int kali(){
        return a*b*c;
    }
    int bagi(){
        return a/b/c;
    }
    int kurang(){
        return a-b-c;
    }

};

class segitiga
{
    private :
    int a;
    int t;

    public:
    void assign(int alas , int tinggi)
    {
        a = alas;
    
   t = tinggi;
    }
    int jumlah(){
        return a*t/2;
    }

};