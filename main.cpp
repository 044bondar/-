#include "MusicPlayer.h"

int main() {
    Song song1("Bohemian Rhapsody", "Queen", 5.55);
    Song song2("Shape of You", "Ed Sheeran", 4.23);

    Song song3;
    song3.setTitle("Blinding Lights").setArtist("The Weeknd").setDuration(3.2);

    Playlist pl1("Rock Classics");
    pl1.addSong(song1);

    Playlist pl2("Pop Hits");
    pl2.addSong(song2);
    pl2.addSong(song3);

    Playlist combined = pl1 + pl2;

    if (!combined) {
        std::cout << "Playlist is empty.\n";
    }

    std::cout << combined;

    std::cout << "Total playlists created: " << Playlist::getTotalPlaylists() << "\n";

    MusicPlayer player(combined);
    player.play();

    const Song constSong("Imagine", "John Lennon", 3.03);
    constSong.display();

    return 0;
}
