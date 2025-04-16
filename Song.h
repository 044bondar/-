#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>

class Song {
private:
    std::string title;
    std::string artist;
    double duration;

public:
    Song();
    Song(std::string t, std::string a, double d);
    Song(const Song& other);
    Song(Song&& other) noexcept; 
    ~Song();

    void display() const;

    Song& setTitle(const std::string& t);
    Song& setArtist(const std::string& a);
    Song& setDuration(double d);

    bool operator==(const Song& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Song& song);
    friend std::istream& operator>>(std::istream& is, Song& song);
};

