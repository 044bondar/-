#include "Song.h"

Song::Song() : title("Unknown"), artist("Unknown"), duration(0.0) {}

Song::Song(std::string t, std::string a, double d) : title(t), artist(a), duration(d) {}

Song::Song(const Song& other) : title(other.title), artist(other.artist), duration(other.duration) {
    std::cout << "Copy constructor called.\n";
}

Song::Song(Song&& other) noexcept :
    title(std::move(other.title)),
    artist(std::move(other.artist)),
    duration(other.duration) {
    std::cout << "Move constructor called.\n";
}

Song::~Song() {
    std::cout << "Song object destroyed.\n";
}

void Song::display() const {
    std::cout << *this << std::endl;
}

Song& Song::setTitle(const std::string& t) {
    this->title = t;
    return *this;
}

Song& Song::setArtist(const std::string& a) {
    this->artist = a;
    return *this;
}

Song& Song::setDuration(double d) {
    this->duration = d;
    return *this;
}

bool Song::operator==(const Song& other) const {
    return title == other.title && artist == other.artist && duration == other.duration;
}

std::ostream& operator<<(std::ostream& os, const Song& song) {
    os << song.title << " by " << song.artist << " (" << song.duration << " min)";
    return os;
}

std::istream& operator>>(std::istream& is, Song& song) {
    std::cout << "Enter title: ";
    std::getline(is, song.title);
    std::cout << "Enter artist: ";
    std::getline(is, song.artist);
    std::cout << "Enter duration: ";
    is >> song.duration;
    is.ignore(); 
    return is;
}
