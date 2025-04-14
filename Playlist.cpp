#include "Playlist.h"

Playlist::Playlist() : name("Unnamed Playlist") {}

Playlist::Playlist(std::string n) : name(n) {}

Playlist::~Playlist() {
    std::cout << "Playlist object destroyed." << std::endl;
}

void Playlist::addSong(const Song& song) {
    songs.push_back(song);
}

void Playlist::display() const {
    std::cout << "Playlist: " << name << "\n";
    for (const auto& song : songs) {
        song.display();
    }