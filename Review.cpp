//
// Created by hloi on 10/14/2021.
//

#include "Review.h"

Review::Review() {
    userName = "NoName";
    rating = -1;
    isModified = false;
}

void Review::DisplayReviews() {
    int i;

    cout << endl << restaurantName << endl;
    cout << "Average rating: " << ratingAvg << endl;
    cout << "--------------------" << endl;

    for(i = 0; i < reviewList.size(); ++i) {
        cout << "User name: " << reviewList.at(i).GetUserName() << endl;
        cout << "   Rating: " << reviewList.at(i).GetRating() << endl;
        cout << endl;
    }
}
