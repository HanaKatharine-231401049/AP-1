#include <iostream>
using namespace std;

int main()
{
    int a,b;
    

    //assignment operator 
    a =3;
    b =5;

    //aritmrtical operator 
    int tambah = a +b;
    int kurang = a-b;
    int kali = a*b;
    float bagi = (float)a/(float)b;  // type casting = mengubah tipe data dari sebuah variabel
    int modulo = a%b;

    cout<<"hasil penjumlahan ="<<tambah<<endl;
    cout<<"hasil kurang ="<<kurang<<endl;
    cout<<"hasil kali ="<<kali<<endl;
    cout<<"hasil bagi  ="<<bagi<<endl;
    cout<<"hasil modulo ="<<modulo<<endl;


}