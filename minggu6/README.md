Penjelasan  Source 1
#include <stdio.h>
void cetakUmur(int *umur){
 printf("Halo, Umur kamu adalah %d tahun", *umur);
}
int main(){

   int angka=20;
   cetakUmur(&angka);
   getchar();
  
   return 0;

}
Penjelasan 

   Function parameter merupakan sebuah variable, hal yang berbeda antara function parameter dan variabel hanyalah pada penepatanya. Karena function parameter merupakan variabel, maka saat pembuatan function parameter kita juga dimungkinkan untuk menggunakan operator dereference, untuk membuat function parameter berupa variabel pointer.
   Pointer merupakan variabel yang dapat menunjuk ke sebuah alamat memori, atau dalam pengertian lain yaitu, variabel yang memiliki kemampuan untuk memiliki alamat memori sebagai nilai dari variabel pointer tersebut. dari variabel pointer kita dimungkinkan untuk mengakses nilai dari alamat memori yang ditunjuk.

Penjelasan Source 2
#include <iostream>
using namespace std;
long int faktorial (int A);
int main(){
int r,hasil;
cout<<"MENGHITUNG NILAI FAKTORIAL DENGAN REKURSIF"<<endl;
cout<<endl;
cout<<"Masukan Nilai = ";
cin>>r;
hasil=faktorial(r);
cout<<"Faktorial "<<r<<"!= "<<hasil<<endl;
}
long int faktorial (int A){
if (A==1)
return(A);
else
return (A*faktorial(A-1));
}
Penjelasan 

   Program  ini untuk berjalan untuk menghitung nilai factorial serta menggunakan fungsi rekrusif 
Rekursif adalah salah satu metode dalam dunia matematika dimana definisi sebuah fungsi mengandung fungsi itu sendiri. bilangan selain 0, jika dipangkatkan dengan 0 nilainya sama dengan 1. Jika x dipangkatkan dengan y, dengan y lebih dari 0, maka hasilnya sama dengan x dikalikan dengan x dipangkatkan y – 1.
