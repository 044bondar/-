#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Song.h"
#include <vector>

class Playlist {
private:
    std::string name;
    std::vector<Song> songs;
public:
    Playlist();
    Playlist(std::string n);
    ~Playlist();
    void addSong(const Song& song);
    void display() const;
};