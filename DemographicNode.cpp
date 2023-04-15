#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>
#include "DemographicNode.h"
#include "DemographicLL.h"

// Print function
void DemographicNode::printNodeData() {
//    demographic->printInfoShort();
}

// Getters
DemographicNode *DemographicNode::getPrev() {
    return prev;
}
DemographicNode *DemographicNode::getNext() {
    return next;
}

// Setters
DemographicNode *DemographicNode::setPrev(DemographicNode prevNode) {
    this->prev = &prevNode;
}
DemographicNode *DemographicNode::setNext(DemographicNode nextNode) {
    this->next = &nextNode;
}

DemographicInfo *DemographicNode::setDemographic(string aRecord) {
    DemographicInfo* demographicInfo(string aRecord);
    this->demographic = demographicInfo(aRecord);
}



