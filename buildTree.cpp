#include <iostream>
#include <fstream>
#include "node.h"

#include <string>

node_t* buildTree(){
    std::ofstream myfile;
    myfile.open("test.txt", std::ios::out);
    node_t* org;
    std::string line;
    std::ifstream urfile ("P.txt");
    while (std::getline(urfile, line) ){
        std::cout << "IT WORKED";
        org->addNode(org, line.length());
        
    }
    std::cout <<"IT WORKED AGAIN";
    return org;

}