#include <iostream>

class Song{
    private:
        std::string songTitle;
        std::string singerName;
        
    public:
        Song(std::string sTitle = "", std::string sName = ""); // Constructor
                                      
        ~Song();                        // Destructor
        
        std::string getSongTitle();      // Returns the song title
        std::string getSingerName();     // Returns the singer name
        void setSongTitle(std::string);  // Sets the song title
        void setSingerName(std::string); // Sets the singer name
      
        friend std::ostream& operator<<(std::ostream& os, const Song& s);
};