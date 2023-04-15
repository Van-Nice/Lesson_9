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

//    cout << "Opening file\n" << endl;
    inputFile.open("Lesson_9_Data.txt", fstream::in);
    if (!inputFile.is_open()) {
        cout << "Could not open file " << endl;
        return 1; // 1 indicates error
    }

    while(runningTotal != 50) {
        string record;
        getline(inputFile, record);
        records.push_back(record);
        runningTotal += 1;
    }

    inputFile.close();
}

vector<string> split_c(string str) {
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

int main() {
    readRecords();
    vector<DemographicInfo> demInfoVector;
    for (int i = 0; i < records.size(); i++) {
        string record = records[i];
        vector<string>separatedRecord = split_c(record);

        DemographicInfo demographicInfo;
        demographicInfo.setAll(separatedRecord[0], separatedRecord[1], separatedRecord[2], separatedRecord[3], separatedRecord[4], separatedRecord[5], separatedRecord[6], separatedRecord[7], separatedRecord[8], separatedRecord[9]);
        demInfoVector.push_back(demographicInfo);
    }

    return 0;
}