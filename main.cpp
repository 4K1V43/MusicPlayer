#include <iostream>
#include "MusicPlayer.h"

int DNode::activeNodes = 0;

int main(){
    
    // creating music player
    MusicPlayer mp1("iPod");
    
    // creating 3 songs
    Song s1("Fireflies", "Owl City");
    Song s2("New York", "Frank Sinatra"); 
    Song s3("Thriller", "Michael Jackson");
    
    // adding songs to music player
    mp1.addSong(s1);
    mp1.addSong(s2);
    mp1.addSong(s3);

    // playing current song using play() function
    std::cout << "1." << std::endl;
    std::cout << "playing current song using play() function:" << std::endl;
    mp1.play();
    
    std::cout << std::endl;
    
    // next song playback
    std::cout << "2." << std::endl;
    std::cout << "next song playback:" << std::endl;
    mp1.next();
    mp1.next();
    mp1.next();
    
    std::cout << std::endl;
    
    // previous song playback
    std::cout << "3." << std::endl;
    std::cout << "previous song playback:" << std::endl;
    mp1.previous();
    mp1.previous();
    mp1.previous();
    
    std::cout << std::endl;
    
    // printing playlist, forward and reverse
    std::cout << "4." << std::endl;
    std::cout << "printing playlist:" << std::endl;
    mp1.print(true);
    std::cout << std::endl;
    mp1.print(false);
    
    std::cout << std::endl;
    
    // removing current song
    mp1.removeSong();
    
    // play new current song
    std::cout << "5." << std::endl;
    std::cout << "playing new current song:" << std::endl;
    mp1.play();
    
    std::cout << std::endl;
    
    // showing playlist works after removal:
    std::cout << "6." << std::endl;
    std::cout << "showing playlist works after removal:" << std::endl;
    mp1.next();
    mp1.next();
    mp1.next();
    
    std::cout << std::endl;
    
    // final playlist review
    // printing playlist, forward and reverse
    std::cout << "7." << std::endl;
    std::cout << "final playlist review:" << std::endl;
    std::cout << "printing playlist, forward and reverse:" << std::endl;
    mp1.print(true);
    std::cout << std::endl;
    mp1.print(false);
    
    return 0;
}