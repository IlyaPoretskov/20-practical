#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream river(R"(C:\develop\Skillboxcpp\20-practical2\Fishing\River.txt)");
    ofstream basket(R"(C:\develop\Skillboxcpp\20-practical2\Fishing\Basket.txt)", ios::app);

    string fish;
    cout << "Input which fish will you catch: ";
    cin >> fish;

    while (!river.eof()) {
        string current_fish;
        river >> current_fish;
        if (current_fish == fish) {
            basket << fish << endl;
            break;
        }
    }
    river.close();
    basket.close();
}