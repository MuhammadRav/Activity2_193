// Latihan4_193.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float LuasPersegi(float p, float l) {
    return p * l;
}
float LuasLingkaran(float r) {
    return 3.14 * r * r;
}
float LuasSegitiga(float a, float t) {
    return 0.5 * a * t;
}

int main()
{
    float panjang, lebar, jejari, alas, tinggi;\
        int pilihan;

    do {
        cout << "\n\n========================" << endl;
        cout << "========= MENU ===========" << endl;
        cout << "========================" << endl;
        cout << "1. Luas Persegi " << endl;
        cout << "2. Luas Lingkaran " << endl;
        cout << "3. Luas Segitiga " << endl;
        cout << "4. Exit " << endl;
        cin >> pilihan;

        switch (pilihan)
    }
}
