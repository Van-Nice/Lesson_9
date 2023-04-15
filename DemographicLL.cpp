#include "DemographicInfo.h"
#include "DemographicNode.h"
#include "DemographicLL.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

void DemographicLL::readDataFile() {
    vector<string> records;

    ifstream inputFile;
    int runningTotal = 0;

    inputFile.open("Lesson_9_Data.txt", fstream::in);

    while(runningTotal != 50) {
        string record;
        getline(inputFile, record);
        records.push_back(record);
        runningTotal += 1;
    }

    inputFile.close();
    vector<DemographicInfo> demInfoVector;
    for (int i = 0; i < records.size(); i++) {
        string record = records[i];
        DemographicInfo demographicInfo(record);
        demographicInfo.printInfoShort();
        demInfoVector.push_back(demographicInfo);
    }
}

void DemographicLL::addNode(string aRecord) {

}

void DemographicLL::printList() {
    cout
            << right << setw(15) << "Last"
            << right << setw(13)<< "First"
            << right << setw(5) << "Age"
            << right << setw(10) << "Sex"
            << right << setw(10) << "Status"
            << right << setw(27) << "Occupation"
            << right << setw(20) << "Street"
            << right << setw(19) << "City"
            << right << setw(9) << "State"
            << right << setw(9) << "Zip"
            << "\n";
}




