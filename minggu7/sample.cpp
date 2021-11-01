#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char str1[] = "nblognlife.com";
    char str2[] = "C++ Programming Language";
    char *p1; //pointer ke string
    char *p2; //pointer ke string
    char *p3; //pointer ke string
    p1 = strstr(str1,"lif");
    p2 = strstr(str2,"Lang");
    p3 = strstr(str2,"PROG");
    cout<<"C++ - strstr()"<<endl;
    cout<<"--------------"<<endl;
    if(p1)
    cout<<"\""<<p1<<"\" ditemukan pada string "<<str1<<endl;
    if(p2)
    cout<<"\""<<p2<<"\" ditemukan pada string "<<str2<<endl;
    if(p3)
    cout<<"\""<<p3<<"\" ditemukan pada string "<<str2<<endl;

 _getche();
 return 0;
}