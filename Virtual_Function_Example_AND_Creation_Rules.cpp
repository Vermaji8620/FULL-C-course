#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH() {}
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()  // virtual likh dene se ye hoga ki baki functions ka display agar call nai ho rha hai,,wo log ko respectively call krne se to ye wala display call ho jayega ......sidha sa yeh matlb hai ki ye wala display sunstitution me call hota hai
    {
        cout << " fndsjndsfns";
    }
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    };
    void display()
    {
        cout << " this is an amazing video with title" << title << endl;
        cout << " this is an amazing video with rating" << rating << " Out of 5 stars" << endl;
        cout << " the length of this video " << videolength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    };
    void display()
    {
        cout << " this is an amazing text with title " << title << endl;
        cout << " this is an amazing text with rating " << rating << " Out of 5 stars" << endl;
        cout << " the number of words in this tutorial " << words << " words" << endl;
    }
};

int main(int argc, char const *argv[])
{
    string title;
    float rating, vlen;
    int words;

    // for cwh with harry video
    title = " Django tutorials";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, vlen);
    djvideo.display();

    printf("\n");
    // for cwh with harry text
    title = " Django tutorials Text";
    words = 433;
    rating = 4.1;
    CWHText djtext(title, rating, words);
    djtext.display();

    printf("\n");

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    printf("\n");
    tuts[1]->display();

    return 0;
}

// RULES FOR VIRTUAL FUNCTIONS--
/*
1. they cannot be static
2. they are accessed by object pointers
3. virtual functions can be a friend of another class
4. function in base class might not be used
5. if a virtual function defined in the base class , there is no need of redifing it in the base class

*/