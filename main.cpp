#include "node.h"
#include "traversals.h"
#include "buildTree.h"
#include <iostream>
// static void printParseTree(nodeType *rootP, int level) {
//         if (rootP == NULL) return;
//     printf("%*c%d:%s ",level*4,' ',level,NodeId.info); // assume some info
//     printed as string
// printf("\n");
// printParseTree(rootP->child1,level+1);
// printParseTree(rootP->child2,level+1);
// }
int main(int argc, char* argv[]) {
     std::cout << "TEST";
// process command line arguments and make sure file
//is readable, error otherwise
// set up keyboard processing so that hereafter the
//input method is not relevant
    node_t *root = buildTree(); // ‘file’ is the input file
    std::cout << "TES2T";
    traversePreOrder(root);
    traversePostOrder(root);
    return 0;
}