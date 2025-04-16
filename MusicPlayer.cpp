#include "MusicPlayer.h"

MusicPlayer::MusicPlayer() : playlist(Playlist()) {}

MusicPlayer::MusicPlayer(Playlist pl) : playlist(pl) {}

MusicPlayer::~MusicPlayer() {
    std::cout << "MusicPlayer destroyed.\n";
}

void MusicPlayer::play() const {
    std::cout << "Now playing:\n";
    playlist.display();
}
