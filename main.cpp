#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("movies.txt");
    if (!file.is_open()) {
        cout << "Could not open file." << endl;
        return 1;
    }

    string title;
    int rating;

    while (file >> title >> rating) {
        cout << title << " " << rating << endl;
    }

    return 0;
}
