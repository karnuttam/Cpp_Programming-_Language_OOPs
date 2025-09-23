//Hybrid Inheritance is a combination of two or more types of inheritance (like single, multiple, multilevel, or hierarchical) in a single program. It is used to combine the advantages of different types of inheritance to achieve complex relationships among classes.

//It often involves multiple inheritance (which can lead to ambiguity if not handled properly using virtual inheritance).

#include <iostream>
using namespace std;

// Base class
class Human {
public:
    Human() {
        cout << "Human Constructor Called" << endl;
    }

    void displayHuman() {
        cout << "I am a Human" << endl;
    }
};

// First level derived class
class Engineer : public virtual Human {
public:
    Engineer() {
        cout << "Engineer Constructor Called" << endl;
    }

    void displayEngineer() {
        cout << "I am an Engineer" << endl;
    }
};

// Second derived class
class Artist : virtual public Human {
public:
    Artist() {
        cout << "Artist Constructor Called" << endl;
    }

    void displayArtist() {
        cout << "I am an Artist" << endl;
    }
};

// Derived from both Engineer and Artist
class YouTuber : public Engineer, public Artist {
public:
    YouTuber() {
        cout << "YouTuber Constructor Called" << endl;
    }

    void displayYouTuber() {
        cout << "I am a YouTuber with skills in engineering and art." << endl;
    }
};

// Main function
int main() {
    YouTuber yt;
    yt.displayHuman();      // from Human
    yt.displayEngineer();   // from Engineer
    yt.displayArtist();     // from Artist
    yt.displayYouTuber();   // own function

    return 0;
}


/**🔐 Why Use virtual Inheritance?
Without virtual, Human would be inherited twice (once via Engineer, once via Artist), causing ambiguity.
Using virtual ensures only one instance of the base class is shared among all derived classes.
**/
