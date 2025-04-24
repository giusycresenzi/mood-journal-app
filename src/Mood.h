#ifndef MOOD_H
#define MOOD_H

#include <string>
#include <ctime>

class Mood {
private:
    std::string type;        // (es. happy, sad, angry)
    std::string description; // every mood has a comment
    std::string timestamp;   // when the mood was recorded
    short int intensity; // 1-5

public:
    // default c'tor
    Mood(const std::string& t, const std::string& d, const short int i);
    // overloading c'tor to have different moods
    static Mood Happy(const std::string& d, const short int i) { return Mood("happy", d, i); }
    static Mood Sad(const std::string& d, const short int i) { return Mood("sad", d, i); }
    static Mood Angry(const std::string& d, const short int i) { return Mood("angry", d, i); }
    static Mood Neutral(const std::string& d, const short int i) { return Mood("existing", d, i); }
    static Mood Excited(const std::string& d, const short int i) { return Mood("peaceful", d, i); }

    // Getters
    std::string getType() const;
    std::string getDescription() const;
    std::string getTimestamp() const;
    int getIntensity() const;

    // if you want to change the description of a mood
    void setDescription(const std::string& newDescription);
};

#endif // MOOD_H