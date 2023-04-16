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
        addNode(record, i);
    }
}

void DemographicLL::printList() {
    cout << right << setw(15) << "Last"
         << right << setw(13) << "First"
         << right << setw(5) << "Age"
         << right << setw(10) << "Sex"
         << right << setw(10) << "Status"
         << right << setw(27) << "Occupation"
         << right << setw(20) << "Street"
         << right << setw(19) << "City"
         << right << setw(9) << "State"
         << right << setw(9) << "Zip"
         << "\n";
    demographicLl.getTail()->getNext()->printNodeData();
//    demographicLl.getHead()->printNodeData();
}

DemographicNode *DemographicLL::addNode(string aRecord, int nodeNumber) {
    // create node
    DemographicInfo* demographicInfo = new DemographicInfo(aRecord);
    DemographicNode* demographicNode = new DemographicNode(aRecord);
    demographicNode->setDemographic(*demographicInfo);
    // Creating first node in linked list
    if (nodeNumber == 0){
        setHead(demographicNode);
        setTail(demographicNode);
        demographicNode->setPrev(nullptr);
        demographicNode->setNext(nullptr);
    } else if (nodeNumber > 0 && nodeNumber < 50){ // creating all nodes that are not the first one
        demographicNode->setNext(nullptr);
        demographicNode->setPrev(demographicLl.getTail());
        demographicLl.setTail(demographicLl.getTail())->setNext(demographicNode);
        demographicLl.setTail(demographicNode);
    }
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

void DemographicLL::printForward(DemographicNode *head) {
    // Print title
    cout << right << setw(15) << "Last"
         << right << setw(13) << "First"
         << right << setw(5) << "Age"
         << right << setw(10) << "Sex"
         << right << setw(10) << "Status"
         << right << setw(27) << "Occupation"
         << right << setw(20) << "Street"
         << right << setw(19) << "City"
         << right << setw(9) << "State"
         << right << setw(9) << "Zip"
         << "\n" << endl;
    // traverse and print through doubly linked list
    demographicLl.getTail()->getNext()->printNodeData();
    DemographicNode *traverser = head;
    traverser->printNodeData();
    while (traverser != nullptr) {
        traverser->printNodeData();
        traverser = traverser->getNext();
    }
}

