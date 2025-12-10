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

    int totalMovies = 0;
    map<string, double> averages;
    

    for (auto&p : movies){
    double sum = 0;
    for (int r : p.second) sum += r;
    double avg = sum / p.second.size();
    averages[p.first] = avg;

    cout << p.first << " avg = " << avg << endl;
    totalMovies++;

    }
    double highest = 0;
    
    for (auto &p : averages){
        if (p.second < highest){
            highest = p.second;
        }
    }

    cout << "Highest average rating: " << highest << endl;
    cout << "Movies with this rating:" << endl;

    for (auto &p : averages){
        if (p.second == highest){
            cout << p.first << endl;
    }
    }   
     return 0;



}
