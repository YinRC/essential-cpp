#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string name;
    cout << "wahts your name?\n";
    cin >> name;

    while (name.length() <= 2) {
        cerr << "Oops! your name can't be that!!! type again\n";
        cin >> name;
    }

    cout << "Welcome !!!  "
         << name << endl;
}
