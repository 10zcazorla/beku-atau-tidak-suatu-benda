#include <iostream>

using namespace std;

int main()
{
    int suhu;

    cout << "Apakah zat yang anda punya beku? Mari buktikan!" << endl;
    cout << "Masukkan suhu benda: ";
    cin >> suhu;

    if (suhu > 0) {
        cout << "\nSuhu lebih dari 0 drajat celcius, zat yang kamu inputkan tidak beku." << endl;
    }
    else {
        cout << "\nSuhu kurang dari 0 dreajat celcius, zat yang kamu inputkan beku!." << endl;
    }
    return 0;
}
