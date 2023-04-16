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

int const zero = 0;
int const one = 1;
int const five = 5;
int const nine = 9;
int const ten = 10;
int const thirteen = 13;
int const fifteen = 15;
int const nineteen = 19;
int const twenty = 20;
int const twenty_seven = 27;
int const fifty = 50;

void DemographicLL::readDataFile() {
    vector<string> records;

    ifstream inputFile;
    int runningTotal = zero;

    inputFile.open("Lesson_9_Data.txt", fstream::in);

    while(runningTotal != fifty) {
        string record;
        getline(inputFile, record);
        records.push_back(record);
        runningTotal += one;
    }

    inputFile.close();
    for (int i = zero; i < records.size(); i++) {
        string record = records[i];
        addNode(record, i);
    }
} // end

void DemographicLL::printList() {
    cout << right << setw(fifteen) << "Last"
         << right << setw(thirteen) << "First"
         << right << setw(five) << "Age"
         << right << setw(ten) << "Sex"
         << right << setw(ten) << "Status"
         << right << setw(twenty_seven) << "Occupation"
         << right << setw(twenty) << "Street"
         << right << setw(nineteen) << "City"
         << right << setw(nine) << "State"
         << right << setw(nine) << "Zip"
         << "\n";
    DemographicNode* node = demographicLl.getTail();
    while(node != nullptr) {
        node->printNodeData();
        node = node->getPrev();
    }

//    DemographicNode* node = demographicLl.getHead();
//    node->printNodeData();
//    DemographicNode* node1 = node->getNext()
//    while (node != nullptr){
//        node->printNodeData();
//        node = node->getNext();
//    }

} // end

void DemographicLL::addNode(const string& aRecord, int nodeNumber) {
    // create node
    auto* demographicInfo = new DemographicInfo(aRecord);
    auto* demographicNode = new DemographicNode(aRecord);
    demographicNode->setDemographic(demographicInfo);
    // Creating first node in linked list
    if (nodeNumber == zero){
        setHead(demographicNode);
        setTail(demographicNode);
        demographicNode->setPrev(nullptr);
        demographicNode->setNext(nullptr);
    } else { // creating all nodes that are not the first one
        demographicNode->setNext(nullptr);
        demographicNode->setPrev(demographicLl.getTail());
        demographicLl.setTail(demographicLl.getTail())->setNext(demographicNode);
        demographicLl.setTail(demographicNode);
    }
} // end

void DemographicLL::setHead(DemographicNode *head) {
    this->head = head;
} // end

DemographicNode *DemographicLL::setTail(DemographicNode *tail) {
    this->tail = tail;
} // end

DemographicNode *DemographicLL::getHead() {
    return head;
} // end

DemographicNode *DemographicLL::getTail() {
    return tail;
} // end



