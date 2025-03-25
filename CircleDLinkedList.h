#include "DNode.h"

class CircleDLinkedList{
    private:
        DNode* cursor;           // Pointer to the current song
        int n;                   // Current number of songs

    public:
      CircleDLinkedList();    
      ~CircleDLinkedList();   
      bool empty() const;      
      int size() const;             // Returns current number of nodes
      void add(const Song&);        // Adds a song after the current song, and updates cursor to point to the new song
      void remove();                // Removes the current song, and updates cursor to point to next song
      void advance();               // Moves to the next song
      void retreat();               // Moves to the previous song
      Song getCurrentSong() const;  // Returns the current song
      
      // Prints all songs in list starting from current position (forward or reverse)
      void print(bool forward = true) const; 
};