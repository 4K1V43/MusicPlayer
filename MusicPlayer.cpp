#include "MusicPlayer.h"

MusicPlayer::MusicPlayer(std::string typeOfMusicPlayer):type(typeOfMusicPlayer){} 

MusicPlayer::~MusicPlayer(){}

void MusicPlayer::play(){
    std::cout << getCurrentSong() << std::endl;
}               
         
void MusicPlayer::next(){
    playlist.advance();
    play();
}                 

void MusicPlayer::previous(){
    playlist.retreat();
    play();
}             

void MusicPlayer::addSong(const Song& s){
    playlist.add(s);
}   

void MusicPlayer::removeSong(){
    playlist.remove();
}          

int MusicPlayer::size() const{
    return playlist.size();
}           

bool MusicPlayer::empty() const{
    return playlist.empty();
}          

Song MusicPlayer::getCurrentSong() const{
    return playlist.getCurrentSong();
}  

void MusicPlayer::print(bool forward){
    playlist.print(forward);
}  


