#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main() {
    ofstream file(R"(C:\develop\Skillboxcpp\20-practical2\ImplementationOfDrawingRandomPictures\pic.txt)");

    unsigned short int x, y;

    srand(time(nullptr));

    cout << "Input picture height and width: ";
    cin >> x >> y;

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            file << rand() % 2 << " ";
        }
        file << endl;
    }

    file.close();
}
