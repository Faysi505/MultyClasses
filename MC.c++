#include <string>
#include <iostream>
#include <vector>

using namespace std;

class MediaFiles
    {
        protected:
        string name;
        string author;
        public:
        MediaFiles(){};
        MediaFiles(string nm, string auth): name(nm), author(auth){};
        string get_name()
        {
            return name;
        }
        void get_author()
        {
            cout << "Author for this file is: " << author << endl;
        }
    };
//----------------------2
class AudioFile : public MediaFiles {
public:
    AudioFile(string nm, string auth, int time) : MediaFiles(nm, auth) {};

    void playaudio() {
        cout << "Playing audio for: " << name << endl;
    }
    void printtime(){
        cout << "This audio lasts for: "<< time << endl;
    }
};

class TextFile : public MediaFiles {
public:
    TextFile(string nm, string auth) : MediaFiles(nm, auth) {};

    void compress() {
        cout << "Compressing text file: " << name << endl;
    }
};

class ImageFile : public MediaFiles {
public:
    ImageFile(string nm, string auth) : MediaFiles(nm, auth) {};

    void print() {
        cout << "Printing image named: " << name << endl;
    }
};

class VideoFile : public MediaFiles {
public:
    VideoFile(string nm, string auth, int time) : MediaFiles(nm, auth) {};

    void playvideo() {
        cout << "Playing video for: " << name << endl;
    }
    void printtime(){
        cout << "This video lasts for: "<< time << endl;
    }
};
//-------------------------1
class AudioBooks : public AudioFile {
public:
    AudioBooks(string nm, string auth, int time) : AudioFile(nm, auth, time) {};
};

class Music : public AudioFile {
public:
    Music(string nm, string auth, int time) : AudioFile(nm, auth, time) {};
};

class Books : public TextFile {
public:
    Books(string nm, string auth) : TextFile(nm, auth) {};
};

class Documents : public TextFile {
public:
    Documents(string nm, string auth) : TextFile(nm, auth) {};
};

class Photos : public ImageFile {
public:
    Photos(string nm, string auth) : ImageFile(nm, auth) {};
};

class Memes : public ImageFile {
public:
    Memes(string nm, string auth) : ImageFile(nm, auth) {};
};

class Video : public VideoFile {
public:
    Video(string nm, string auth, int time) : VideoFile(nm, auth, time) {};
};

class Films : public VideoFile {
public:
    Films(string nm, string auth, int time) : VideoFile(nm, auth, time) {};
};

int main(){

    vector<MediaFiles *> audiofile;
    audiofile.push_back(new AudioBooks("The Art of War", "Sun Tzu", 300));
    audiofile.push_back(new Music("Bohemian Rhapsody", "Queen", 5));

    vector<MediaFiles *> textfile;
    textfile.push_back(new Books("1984", "George Orwell"));
    textfile.push_back(new Documents("Project Plan", "Unknown"));

    vector<MediaFiles *> imagefile;
    imagefile.push_back(new Photos("Vacation", "John Doe"));
    imagefile.push_back(new Memes("Funny Cat", "Unknown"));

    vector<MediaFiles *> videofile;
    videofile.push_back(new Video("Travel Vlog", "Alice", 160));
    videofile.push_back(new Films("Inception", "Christopher Nolan", 146));

    int choice = 0;
    cout << "Which files would you like to check? \n (1.Audio 2.Text 3.Image 4.Video)" << endl;
    cin >> choice;
    if (choice == 1)
    {
        MediaFiles->get_author();
        MediaFiles->eat();
        MediaFiles->sleep();
    }
    else if (choice == 2)
    {

    }
    else if (choice == 3)
    {

    }
    else if (choice == 4)
    {

    }

}