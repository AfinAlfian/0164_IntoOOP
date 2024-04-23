#include <iostream>
using namespace std;

class bangunDatar {
    private:
        float panjang, lebar;
    public:
        float luas;
        void input() {
            cout << "Masukkan Panjangnya = ";
            cin >> panjang;
            cout << "Masukkan Lebarnya = ";
            cin >> lebar;
        }
        float hitungLuas() {
            return panjang * lebar;
        }
        void display() {
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << lebar << endl;
            cout << "Luasnya = " << hitungLuas() << endl;
        }
};

int main()
{
    bangunDatar pp;
    pp.input();
    pp.display();

    return 0;
}

