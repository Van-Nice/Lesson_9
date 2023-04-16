//
// Created by Wilson Van Nice on 4/11/23.
//

#ifndef LESSON_9_DEMOGRAPHICINFO_H
#define LESSON_9_DEMOGRAPHICINFO_H
#include <string>
#include <utility>

using namespace std;

class DemographicInfo {
public:
    explicit DemographicInfo(const string& record) {
        setAll(record);
    }
    void setAll(const string& record);
    string getfirstName();
    string getlastName();
    string getsex();
    string getmaritalStatus();
    string getoccupation();
    string getstreetAddress();
    string getcity();
    string getstate();
    string getage();
    string getzipCode();
    void printInfoShort();
    static vector<string> split_c(const string& str);
private:
    string firstName,
           lastName,
           sex,
           maritalStatus,
           occupation,
           streetAddress,
           city,
           state,
           age,
           zipCode;
}; // end


#endif //LESSON_9_DEMOGRAPHICINFO_H
