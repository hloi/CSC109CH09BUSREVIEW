//
// Created by hloi on 10/14/2021.
//

#ifndef CSC109CH09BUSREVIEW_REVIEWER_H
#define CSC109CH09BUSREVIEW_REVIEWER_H
#include <string>
using std::string;

class Reviewer {
private:
    string userName;
    int rating;

public:
    void setUserName(const string &userName);
    void setRating(int rating);
    const string &getUserName() const;
    int getRating() const;



};


#endif //CSC109CH09BUSREVIEW_REVIEWER_H
