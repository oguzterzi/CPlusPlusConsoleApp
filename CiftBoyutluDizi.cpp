#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int dizi[10][3] = {0};

	srand(time(0));

	for (int i = 0; i < 10; i++) {
            dizi[i][0] = rand() % 10;
			dizi[i][1] = rand() % 90 + 10;
			dizi[i][2] = dizi[i][1] * dizi[i][0];
	}
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            cout << dizi[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
