#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file;
    file.open(R"(C:\develop\Skillboxcpp\20-practical2\StatementWriter\StatementOfPeople.txt)", ios::app);

    string name = " ", surname = " ", date = " ";
    unsigned short int money = 0;

    while (true) {
        cout << "Input person specifications:\n";
        cin >> name >> surname >> date >> money;

        //Input control

        if (name == "Stop" || surname == "Stop" || date == "Stop") {
            break;
        }

        while (stoi(date.substr(3, 2)) > 12 || stoi(date.substr(0, 2)) > 31) {

            cout << "Invalid date!\n";
            cout << "Date: ";
            cin >> date;
        }
        file << name << " " << surname << " " << date << " " << money << endl;
    }

    file.close();
    system("pause");
}
