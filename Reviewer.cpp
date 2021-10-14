//
// Created by hloi on 10/14/2021.
//

#include "Reviewer.h"

const string &Reviewer::getUserName() const {
    return userName;
}

int Reviewer::getRating() const {
    return rating;
}

void Reviewer::setUserName(const string &userName) {
    this->userName = userName;
}

void Reviewer::setRating(int rating) {
    this->rating = rating;
}

Reviewer::Reviewer() {
    userName = "NoName";
    rating = -1;
}

Reviewer::Reviewer(string userName, int rating) {
    this->userName = userName;
    this->rating = rating;
}
