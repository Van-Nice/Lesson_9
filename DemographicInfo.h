//
// Created by Wilson Van Nice on 4/11/23.
//

#ifndef LESSON_9_DEMOGRAPHICINFO_H
#define LESSON_9_DEMOGRAPHICINFO_H
#include <string>

using namespace std;

class DemographicInfo {
public:
//    DemographicInfo(string record);
    void setAll(string firstName, string lastName, string age, string sex, string maritalStatus, string occupation, string streetAddress, string city, string state, string zipCode);
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
