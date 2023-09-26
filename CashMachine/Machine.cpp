#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    const int banknotes[6] = {100, 200, 500, 1000, 2000, 5000};

    ofstream file(R"(C:\develop\Skillboxcpp\20-practical\CashMachine\cash.bin)", ios::binary);

    cout << "Input operation: ";

    char operation;
    cin >> operation;

    if (operation == '+') {

        srand(time(nullptr));

        for (int i = 0; i < 1000; ++i) {

            int value = banknotes[rand() % 6];

            file.write((char *) &value, sizeof(value));
            file.write((char *) &"\n", sizeof("\n"));
        }

        file.close();
    } if (operation == '-') {
        cout << "Input amount that you will withdraw: ";

        int amount = 0;
        cin >> amount;

        cout << "The amount of " << amount <<" rubles was successfully withdrawn!\n";
    }

    system("pause");
}