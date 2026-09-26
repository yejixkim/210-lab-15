// COMSC 210 | Lab 15 | Yeji Kim

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Movie {
    private:
        string title;
        int yearReleased;
        string screenWriter;

    public:
        // setter functions
        void setTitle(string t) {
            title = t;
        }

        void setYearReleased(int y) {
            yearReleased = y;
        }

        void setScreenWriter(string s) {
            screenWriter = s;
        }

    // getter functions
        string getTitle() {
            return title;
        }

        int getYearReleased() {
            return yearReleased;
        }

        string getScreenWriter() {
            return screenWriter;
        }

    // print function
    void print() {
        cout << "Movie: " << title << endl;
        cout << "   Year Released: " << yearReleased << endl;
        cout << "   Screenwriter: " << screenWriter << endl;
        cout << endl;
    }
};

int main() {
    //open input file
    ifstream inputFile("input.txt");

    if (!inputFile) {
        cout << "Error: Could not open input file." << endl;
    }

    //create vector to store Movie objects
    vector<Movie> movies;



    return 0;
}