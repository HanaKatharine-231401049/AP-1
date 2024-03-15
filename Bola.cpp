#include <iostream>
using namespace std;

int main()
{
    const float phi=3.14;
    int r; 
    float v,lp;

    cout<<"masukan jari-jari :";
    cin>>r;

    lp = 4*phi*r*r;
    v = (4.0/3)*phi*r*r*r;

    cout<<"luas permukaan ="<<lp<<endl;
    cout<<"volume ="<<v<<endl;



}