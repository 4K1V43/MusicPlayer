#include "CircleDLinkedList.h"

CircleDLinkedList::CircleDLinkedList(){
    cursor = nullptr;
    n = 0;
}   

CircleDLinkedList::~CircleDLinkedList(){
    while(!empty()){
        remove();
    }
}

bool CircleDLinkedList::empty() const{
    return cursor == nullptr;
}      

int CircleDLinkedList::size() const{
    return n;
}   

void CircleDLinkedList::add(const Song& s){
// adds a song after current song, and updates cursor to point to the new song
    
    DNode* newNode = new DNode(s);
    
    if(empty()){
        cursor = newNode;
        cursor->next = cursor;
        cursor->prev = cursor;
    }
    else{
        newNode->prev = cursor;
        newNode->next = cursor->next;
        cursor->next->prev = newNode;
        cursor->next = newNode;
        cursor = newNode;
    }
    
    n++;    // current number of songs increases by 1
}  

void CircleDLinkedList::remove(){
// Removes the current song, and updates cursor to point to next song
    
    if(empty()){
        std::cout << "playlist is already empty." << std::endl;        
    }
    else if(n == 1){  
        DNode* temp = cursor;
        cursor = nullptr;
        delete temp;
    }
    else{
        DNode* temp =  cursor;
        cursor->prev->next = cursor->next;
        cursor->next->prev = cursor->prev;
        cursor = cursor->next;
        delete temp;
    }
    n--;
}          

void CircleDLinkedList::advance(){
    if(empty()){         // if there are zero songs in the list
        std::cout << "playlist is empty." << std::endl;
    }
    else{
       cursor = cursor->next; 
    }
}

void CircleDLinkedList::retreat(){
    if(empty()){         
        std::cout << "playlist is empty." << std::endl;
    }
    else{
       cursor = cursor->prev; 
    }
}

Song CircleDLinkedList::getCurrentSong() const{
    return cursor->elem;    // operator overload function allows us to output elem
} 

// Prints all songs in list starting from current position (forward or reverse)
void CircleDLinkedList::print(bool forward) const{

    DNode* tempForPrint = cursor;

    if(forward){
        for(int i = 0; i < n; i++){
            std::cout << tempForPrint->elem << std::endl;
            tempForPrint = tempForPrint->next;
        }
        tempForPrint = tempForPrint->next;
    }
    else{
        for(int i = 0; i < n; i++){
            std::cout << tempForPrint->elem << std::endl;
            tempForPrint = tempForPrint->prev;
        }
        tempForPrint = tempForPrint->prev;
    }
}




