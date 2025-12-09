#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    ifstream file("210-xc2-FA25.txt");
    if (!file.is_open()) {
        cout << "Could not open file." << endl;
        return 1;
    }

    map<string, vector<int>> movies;

    string title;
    int rating;

    while (file >> title >> rating) {
       movies[title].push_back(rating);
    }

    for (auto&p : movies){
        cout << p.first << ": ";
        for (int r : p.second){
            cout << r << " ";
        }      
        cout << endl;  
    }

    for (auto&p : movie){
    double sum = 0;
    for (int r : p.second) sum = r;
    double avg = sum / movies.size();
    
    cout << p.first << " avg = " << avg << endl;
    }

    return 0;
}
