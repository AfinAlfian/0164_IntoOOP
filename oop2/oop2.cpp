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
};

int main()
{
    std::cout << "Hello World!\n";
}

