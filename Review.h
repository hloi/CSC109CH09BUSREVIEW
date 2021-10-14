//
// Created by hloi on 10/14/2021.
//

#ifndef CSC109CH09BUSREVIEW_REVIEW_H
#define CSC109CH09BUSREVIEW_REVIEW_H
#include <string>
#include <vector>
#include "Reviewer.h"

using std::string;
using std::vector;

class Review {
public:
    Review();
    Review(string filename);
    void ReadReview();
    double CalcAvgRating();
    void ReviewersReport(string& reportName);  // save the report to a file
    void SaveReview();  // save review; isModified = false;
    bool ChangeReview(string& reviewer, double rating); // change the review by reviewer's name
    bool deleteReviewer(string& reviewer);  // delete a reviewer
    void addReviewer(string& reviewer, double rating);  // add a reviewer
    void EnterReport(); // for input only; no testing

private:
    vector<Reviewer> reviewList;
    bool isModified;  // any changes to the file?
    double avgRating; // average of the restaurant
    string filename;
    string restaurantName;
};


#endif //CSC109CH09BUSREVIEW_REVIEW_H
