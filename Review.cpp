//
// Created by hloi on 10/14/2021.
//
#include <sstream>
#include <fstream>
#include <iostream>
#include "Review.h"

using namespace std;

Review::Review() {
    isModified = false;
}

Review::Review(string filename) {
    this->filename = filename;
}

void Review::ReadReview() {
    ifstream inFS;     // Input file stream
    string userName;
    int userRating;
    Review currentReview;

    // Open file
    inFS.open(filename);

    if (!inFS.is_open()) {
        cout << "Could not open file Trattoria_Reviews.txt."<< endl;
    }
    getline(inFS, restaurantName);
    while (!inFS.eof()) {
        string line;
        getline(inFS, line);

        if (!inFS.fail()) {
            std::istringstream ss(line);

            string userName;
            int rating;
            ss >> userName;
            ss >> rating;
            Reviewer rv(userName, rating);
            reviewList.push_back(rv);
        }
    }

    // Close file when done reading
    inFS.close();
}

//void Review::ReviewersReport(string& reportName) {
//    int i;
//
//    cout << endl << restaurantName << endl;
//    cout << "Average rating: " << ratingAvg << endl;
//    cout << "--------------------" << endl;
//
//    for(i = 0; i < reviewList.size(); ++i) {
//        cout << "User name: " << reviewList.at(i).GetUserName() << endl;
//        cout << "   Rating: " << reviewList.at(i).GetRating() << endl;
//        cout << endl;
//    }
//}
