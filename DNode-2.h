#include <iostream>
#include "Song.h"

class CircleDLinkedList;

class DNode{
    private:
        Song elem;
        DNode* next;             
        DNode* prev;             

    public:
        static int activeNodes;  

    private:
        DNode(const Song& s, DNode* p = nullptr, DNode* n = nullptr){
            elem = s;
            prev = p;
            next = n;
            
            activeNodes++;
        }
    
    public:
        ~DNode(){
            activeNodes--;
        }

    friend class CircleDLinkedList;
};