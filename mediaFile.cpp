#include <iostream>
using namespace std;
class mediafile
{
public:
    virtual void play() = 0;
};

class audio : public mediafile
{
public:
    void play()
    {
        cout << "Playing audio....." << endl;
    }
};

class image : public mediafile
{
public:
    void play()
    {
        cout << "Loading image....." << endl;
    }
};
class video : public mediafile
{
public:
    void play()
    {
        cout << "Playing video....." << endl;
    }
};

int main()
{
    audio aud;
    image img;
    video vid;
    mediafile *mdf[] = {&aud, &img, &vid};

    for (int i = 0; i < 3; i++)
    {
        mdf[i]->play();
    }

    return 0;
}