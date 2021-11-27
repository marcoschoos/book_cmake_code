#include <iostream>
#include <libxml/DOCBparser.h>

int main()
{
    // Parse the file
    DomParser parser;
    parser.parse_file("file.xml");
    Node* rootNode = parser.get_document()->get_root_node();

    return 0;
}
