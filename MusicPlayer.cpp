#include "MusicPlayer.h"

MusicPlayer::MusicPlayer() : playlist(Playlist()) {}

MusicPlayer::MusicPlayer(Playlist pl) : playlist(pl) {}

MusicPlayer::~MusicPlayer() {
    std::cout << "MusicPlayer object destroyed." << std::endl;
}

void MusicPlayer::play() const {
    std::cout << "Now playing: " << std::endl;
    playlist.display();
}