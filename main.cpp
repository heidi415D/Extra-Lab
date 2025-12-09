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

    map<string, vector<int>> movies;

    string title;
    int rating;

    while (file >> title >> rating) {
       movies[title].push_back(0);
    }

    for (auto&p : movies){
        cout << p.first << ": ";
        for (int r : p.second){
            cout << r << " ";
            cout << endl;
        }        
    }
    
    return 0;
}
