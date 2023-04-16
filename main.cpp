//  Wilson Van Nice
// This is a application that reads records from a file into objects that are assembled
// into a double linked list and printed.

#include "DemographicNode.h"
#include "DemographicLL.h"
#include <vector>

using namespace std;

int main() {
    // call print list function from doubly linked list object to display records
    DemographicLL::printList();
    return 0;
} // end