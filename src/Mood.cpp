#include "Mood.h"

Mood::Mood(const std::string& t, const std::string& d, short int i)
    : type(t), description(d), intensity(i) {
    // Set the current timestamp
    time_t now = time(0);
    timestamp = ctime(&now);
}

std::string Mood::getType() const {
    return type;
}

std::string Mood::getDescription() const {
    return description;
}

std::string Mood::getTimestamp() const {
    return timestamp;
}

int Mood::getIntensity() const {
    return intensity;
}

void Mood::setDescription(const std::string& newDescription) {
    description = newDescription;
}