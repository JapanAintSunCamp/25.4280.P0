#include "node.h"
#include "traversals.h"
#include "buildTree.h"

static void printParseTree(nodeType *rootP, int level) {
if (rootP == NULL) return;
printf("%*c%d:%s ",level*4,' ',level,NodeId.info); // assume some info
printed as string
printf("\n");
printParseTree(rootP->child1,level+1);
printParseTree(rootP->child2,level+1);
}
int main(int argc, char* argv[]) {
// process command line arguments and make sure file
//is readable, error otherwise
// set up keyboard processing so that hereafter the
//input method is not relevant
node_t *root = buildTree(file); // ‘file’ is the input file
levelOrder(root);
preOrder(root);
postOrder(root);
return 0;
}