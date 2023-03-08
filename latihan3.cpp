#include <iostream>
using namespace std;
double P, L;

void input(){
    cout << "Masukan Panjangnya = ";
    cin >> P;
    cout << "Masukkan Lebarnya = ";
    cin >> L;
}

double proses (){
    return P*L;
}

double proses2(double a, double b){
    return a*b;
}

void output(){
    cout << "Luasnya = " << prosess();
    cout << "\nLuasnya ke 2 = " <<
    proses2 (P,L);
}
int main(){
    input ();
    output();
}