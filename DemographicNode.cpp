#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>
#include "DemographicNode.h"
#include "DemographicLL.h"

// Print function
void DemographicNode::printNodeData() {
    getDemographic()->printInfoShort();
}
// Getters
DemographicNode *DemographicNode::getPrev() {
    return prev;
}
DemographicNode *DemographicNode::getNext() {
    return next;
}
DemographicInfo *DemographicNode::getDemographic() {
    return demographic;
}

// Setters
DemographicNode *DemographicNode::setPrev(DemographicNode* prevNode) {
    this->prev = prevNode;
}
DemographicNode *DemographicNode::setNext(DemographicNode* nextNode) {
    this->next = nextNode;
}

DemographicInfo *DemographicNode::setDemographic(DemographicInfo demographicInfo) {
    this->demographic = &demographicInfo;
}
