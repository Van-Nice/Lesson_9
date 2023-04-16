#include "DemographicInfo.h"
#include "DemographicNode.h"
#include "DemographicLL.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;
DemographicLL demographicLl;

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
    for (int i = 0; i < records.size(); i++) {
        string record = records[i];
        addNode(record);
    }
}

void DemographicLL::printList() {
    cout << right << setw(15) << "Last"
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

DemographicNode *DemographicLL::addNode(string aRecord) {
    // create node
    DemographicInfo* demographicInfo = new DemographicInfo(aRecord);
    DemographicNode* demographicNode = new DemographicNode(aRecord);
    demographicNode->setDemographic(*demographicInfo);
    demographicNode->setNext(demographicNode);
    demographicNode->setPrev(demographicNode);
    setHead(demographicNode);
    setTail(demographicNode);
    demographicLl.getHead()->getPrev()->printNodeData();
    demographicLl.getTail()->printNodeData();
}

DemographicNode *DemographicLL::setHead(DemographicNode *head) {
    this->head = head;
}

DemographicNode *DemographicLL::setTail(DemographicNode *tail) {
    this->tail = tail;
}

DemographicNode *DemographicLL::getHead() {
    return head;
}

DemographicNode *DemographicLL::getTail() {
    return tail;
}











