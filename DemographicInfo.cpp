#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

string DemographicInfo::getfirstName() {
    return firstName;
}

string DemographicInfo::getlastName() {
    return lastName;
}

string DemographicInfo::getsex() {
    return sex;
}

string DemographicInfo::getmaritalStatus() {
    return maritalStatus;
}

string DemographicInfo::getoccupation() {
    return occupation;
}

string DemographicInfo::getstreetAddress() {
    return streetAddress;
}

string DemographicInfo::getcity() {
    return city;
}

string DemographicInfo::getstate() {
    return state;
}

string DemographicInfo::getage() {
    return age;
}

string DemographicInfo::getzipCode() {
    return zipCode;
}

//void DemographicInfo::printInfoShort() {
//    cout
//    << right << setw(15) << getlastName()
//    << right << setw(13)<< getfirstName()
//    << right << setw(5) << getage()
//    << right << setw(10) << getsex()
//    << right << setw(10) << getmaritalStatus()
//    << right << setw(27) << getoccupation()
//    << right << setw(20) << getstreetAddress()
//    << right << setw(20) << getcity()
//    << right << setw(5) << getstate()
//    << right << setw(15) << getzipCode()
//    << "\n";
//}

vector<string> DemographicInfo::split_c(string str) {
    vector<string> separatedRecord;
    string w = "";
    for (auto x : str)
    {
        if (x == ',')
        {
            separatedRecord.push_back(w);
            w = "";
        }
        else {
            w = w + x;
        }
    }
    separatedRecord.push_back(w);
    return separatedRecord;
}

void DemographicInfo::setAll(string record) {
    vector<string>separatedRecord = split_c(record);
    this->firstName = separatedRecord[0];
    this->lastName = separatedRecord[1];
    this->age = separatedRecord[2];
    this->sex = separatedRecord[3];
    this->maritalStatus = separatedRecord[4];
    this->occupation = separatedRecord[5];
    this->streetAddress = separatedRecord[6];
    this->city = separatedRecord[7];
    this->state = separatedRecord[8];
    this->zipCode = separatedRecord[9];
}

DemographicInfo *DemographicInfo::printInfoShort() {
    cout
    << right << setw(15) << getlastName()
    << right << setw(13)<< getfirstName()
    << right << setw(5) << getage()
    << right << setw(10) << getsex()
    << right << setw(10) << getmaritalStatus()
    << right << setw(27) << getoccupation()
    << right << setw(20) << getstreetAddress()
    << right << setw(20) << getcity()
    << right << setw(5) << getstate()
    << right << setw(15) << getzipCode()
    << "\n";
}




















