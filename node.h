#include <iostream>
#ifndef NODE_H
#define NODE_H

class node_t{
    public:
        node_t * left;
        node_t * right;
        int data;
        node_t * gLeft(){
            return left;
        }
        node_t * gRight(){
            return right;
        }
        int gData(){
            return data;
        }

        void addNode(node_t * og, int num){
            if(og == nullptr)
            {
                std::cout << "1";
                og = this;
                og->data = num;
            }else if (og->data > num)
            {   std::cout << "2";
                addNode(og->left, num);
                /* code */
            }           else
            {
                addNode(og->right, num);
                std::cout << "3";
                /* code */
            }

        }

};
#endif