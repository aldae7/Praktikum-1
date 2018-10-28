#include <iostream>

using namespace std;

int main(){
    int bilangan, sisa;
    string keterangan;
    cout << "masukkan sebuah bilangan bulat: "; cin >> bilangan;

    keterangan = "genap.";
    sisa = bilangan % 2;
    if (sisa == 1)
    keterangan = "ganjil.";

    cout << bilangan << "adalah" << keterangan << endl;

    return 0;
}
