#include "CircleDLinkedList.h"

class MusicPlayer{
  private:
      std::string type;             // Type of music player
      CircleDLinkedList playlist;   // Doubly circular linked list of songs

  public:
      MusicPlayer(std::string);    // Constructor 
      virtual ~MusicPlayer();      // Destructor
      void play();                 // Plays the current song (prints the song 
                                   // details)
     
      void next();                 // Moves to the next song and plays it
      void previous();             // Moves to the previous song and plays it
      void addSong(const Song&);   // Adds a song before the current song
      void removeSong();           // Removes the current song
      int size() const;            // Returns current number of songs
      bool empty() const;          // Checks if the music player is empty
      Song getCurrentSong() const;  // Returns the current song
      
      void print(bool);     // Prints playlist from current song (true = forward, false = reverse,  recursive)
};