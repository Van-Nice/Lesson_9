#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int const zero = 0;
int const one = 1;
int const two = 2;
int const three = 3;
int const four = 4;
int const five = 5;
int const six = 6;
int const seven = 7;
int const eight = 8;
int const nine = 9;
int const ten = 10;
int const thirteen = 13;
int const fifteen = 15;
int const nineteen = 19;
int const twenty = 20;
int const twenty_seven = 27;

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

vector<string> DemographicInfo::split_c(const string& str) {
    vector<string> separatedRecord;
    string w;
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

void DemographicInfo::setAll(const string& record) {
    vector<string>separatedRecord = split_c(record);
    this->firstName = separatedRecord[zero];
    this->lastName = separatedRecord[one];
    this->age = separatedRecord[two];
    this->sex = separatedRecord[three];
    this->maritalStatus = separatedRecord[four];
    this->occupation = separatedRecord[five];
    this->streetAddress = separatedRecord[six];
    this->city = separatedRecord[seven];
    this->state = separatedRecord[eight];
    this->zipCode = separatedRecord[nine];
}

void DemographicInfo::printInfoShort() {
    cout
    << right << setw(fifteen) << getlastName()
    << right << setw(thirteen)<< getfirstName()
    << right << setw(five) << getage()
    << right << setw(ten) << getsex()
    << right << setw(ten) << getmaritalStatus()
    << right << setw(twenty_seven) << getoccupation()
    << right << setw(twenty) << getstreetAddress()
    << right << setw(twenty) << getcity()
    << right << setw(five) << getstate()
    << right << setw(fifteen) << getzipCode()
    << "\n";
}




















