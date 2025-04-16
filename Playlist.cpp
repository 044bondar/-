#include "Playlist.h"

int Playlist::totalPlaylists = 0;

Playlist::Playlist() : name("Unnamed Playlist") {
    totalPlaylists++;
}

Playlist::Playlist(std::string n) : name(n) {
    totalPlaylists++;
}

Playlist::Playlist(const Playlist& other) : name(other.name), songs(other.songs) {
    totalPlaylists++;
}

Playlist::~Playlist() {
    std::cout << "Playlist destroyed.\n";
}

void Playlist::addSong(const Song& song) {
    songs.push_back(song);
}

void Playlist::display() const {
    std::cout << *this;
}

int Playlist::getTotalPlaylists() {
    return totalPlaylists;
}

Playlist Playlist::operator+(const Playlist& other) const {
    Playlist result(this->name + " + " + other.name);
    result.songs = this->songs;
    result.songs.insert(result.songs.end(), other.songs.begin(), other.songs.end());
    return result;
}

bool Playlist::operator!() const {
    return songs.empty();
}

std::ostream& operator<<(std::ostream& os, const Playlist& pl) {
    os << "Playlist: " << pl.name << "\n";
    for (const auto& s : pl.songs) {
        os << s << "\n";
    }
    return os;
}
