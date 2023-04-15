//  Wilson Van Nice
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "DemographicInfo.h"

using namespace std;

vector<string> records;
int readRecords() {
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
}


int main() {
    readRecords();
    vector<DemographicInfo> demInfoVector;
    for (int i = 0; i < records.size(); i++) {
        string record = records[i];
        DemographicInfo demographicInfo(record);
        demographicInfo.printInfoShort();
    }
    return 0;
}