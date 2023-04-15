#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void DemographicInfo::setAll(string firstName, string lastName, string age, string sex, string maritalStatus, string occupation, string streetAddress, string city, string state, string zipCode) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->sex = sex;
    this->maritalStatus = maritalStatus;
    this->occupation = occupation;
    this->streetAddress = streetAddress;
    this->city = city;
    this->state = state;
    this->age = age;
    this->zipCode = zipCode;
}

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

void DemographicInfo::printInfoShort() {
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



















