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
    Reviewer::userName = userName;
}

void Reviewer::setRating(int rating) {
    Reviewer::rating = rating;
}
