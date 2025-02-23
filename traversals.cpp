#include "node.h"
#include <iostream>
void traversePreOrder(node_t* node){
    if(node == nullptr){
        return;
    }
    std::cout<<node->gData();
    traversePreOrder(node->gLeft());
    traversePreOrder(node->gRight());
    

}
void traversePostOrder(node_t* node){
    if(node == nullptr){
        return;
    }
    traversePostOrder(node->gRight());
    traversePostOrder(node->gLeft());
    std::cout<<node->gData();
}