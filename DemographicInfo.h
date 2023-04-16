//
// Created by Wilson Van Nice on 4/11/23.
//

#ifndef LESSON_9_DEMOGRAPHICINFO_H
#define LESSON_9_DEMOGRAPHICINFO_H
#include <string>

using namespace std;

class DemographicInfo {
public:
    DemographicInfo(string record) {
        setAll(record);
    }
    void setAll(string record);
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
    DemographicInfo* printInfoShort();
    vector<string> split_c(string str);
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
};


#endif //LESSON_9_DEMOGRAPHICINFO_H
