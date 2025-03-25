#include "Song.h"

Song::Song(std::string sTitle, std::string sName):songTitle(sTitle), singerName(sName){}
                              
Song::~Song(){}                        

std::string Song::getSongTitle(){
    return songTitle;
}     
std::string Song::getSingerName(){
    return singerName;
}     

void Song::setSongTitle(std::string sTitle){
    songTitle = sTitle;
}

void Song::setSingerName(std::string sName){
    singerName = sName;
}

std::ostream& operator<<(std::ostream& os, const Song& s) {
    os << "Name: " << s.songTitle << ", Artist: " << s.singerName;
    return os;
}
