#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include "Playlist.h"

class MusicPlayer {
private:
    Playlist playlist;
public:
    MusicPlayer();
    MusicPlayer(Playlist pl);
    ~MusicPlayer();
    void play() const;
};