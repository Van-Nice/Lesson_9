#include "DemographicInfo.h"
#include "DemographicNode.h"
#include "DemographicLL.h"

// Print function
void DemographicNode::printNodeData() {
    getDemographic()->printInfoShort();
} // end

// Getters
DemographicNode *DemographicNode::getPrev() {
    return prev;
} // end
DemographicNode *DemographicNode::getNext() {
    return next;
} // end
DemographicInfo *DemographicNode::getDemographic() {
    return demographic;
} // end

// Setters
DemographicNode* DemographicNode::setPrev(DemographicNode* prevNode) {
    this->prev = prevNode;
} // end
DemographicNode* DemographicNode::setNext(DemographicNode* nextNode) {
    this->next = nextNode;
} // end
DemographicInfo *DemographicNode::setDemographic(DemographicInfo* demographicInfo) {
    this->demographic = demographicInfo;
} // end
