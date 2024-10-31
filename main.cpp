#include "stdafx.h"
#include <iostream>
#include <locale.h>
using namespace std;

class Not {
private:
    int n;

public:
    Not() : n(0) {
        cout << "Not oluşturuldu: " << n << endl;
    }

    Not(int x) {
        if (x < 0) {
            n = 0;
        } else if (x > 100) {
            n = 100;
        } else {
            n = x;
        }
        cout << "Not oluşturuldu: " << n << endl;
    }

    ~Not() {
        cout << "Not silindi: " << n << endl;
    }

    void Ekle(int x) {
        n += x;
        if (n > 100) {
            n = 100;
        }
    }

    void Ekle(const Not &x) {
        Ekle(x.n);
    }

    void Arttir(int x) {
        n += x;
        if (n > 100) {
            n = 100;
        }
    }

    int Yuzde(int x) const {
        return n * x / 100;
    }

    int GetDeğer() const {
        return n;
    }
};

int main() {
	setlocale(LC_ALL, "Turkish");
    Not not1;
    Not not2(85);

    not1.Ekle(10);
    cout << "Not1 değeri: " << not1.GetDeğer() << endl;

    not1.Arttir(5);
    cout << "Not1 değeri (arttırıldı): " << not1.GetDeğer() << endl;

    not2.Ekle(30);
    cout << "Not2 değeri: " << not2.GetDeğer() << endl;

    cout << "Not2'nin %50'si: " << not2.Yuzde(50) << endl;

    return 0;
}
