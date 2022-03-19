#include <iostream>
using namespace std;

int main(){
    float angka1, angka2, hasil;
    char operasi;

    cout<<"Angka 1 :";
    cin>>angka1;
    cout<<"Angka 2 :";
    cin>>angka2;

    cout<<"Operasi : ";
    cin>>operasi;

    //Penjumlahan 
    if (operasi == '+'){
        hasil = angka1 + angka2;
    }else if (operasi == '-'){
        hasil = angka1 - angka2;
    }else if (operasi == '/'){
        hasil = angka1 / angka2;
    }else if (operasi == '*'){
        hasil = angka1 * angka2;
    }
    cout<<"\n";
    cout<<"Hasil : "<<hasil<<endl;

 return 0;
}