#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Song.h"
#include <vector>

class Playlist {
private:
    std::string name;
    std::vector<Song> songs;
    static int totalPlaylists;

public:
    Playlist();
    Playlist(std::string n);
    Playlist(const Playlist& other);
    ~Playlist();

    void addSong(const Song& song);
    void display() const;

    static int getTotalPlaylists();

    Playlist operator+(const Playlist& other) const;

    bool operator!() const;

    friend std::ostream& operator<<(std::ostream& os, const Playlist& pl);
};

#endif
