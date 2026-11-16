#include "Media.hpp"

Media::Media()
    : id(0), title(""), releaseYear(0), isAvailable(true), borrowedByUserId(-1) {}

Media::Media(int id, const std::string& title, int year)
    : id(id), title(title), releaseYear(year), isAvailable(true), borrowedByUserId(-1) {}

int Media::getId() const { return id; }
const std::string& Media::getTitle() const { return title; }
int Media::getReleaseYear() const { return releaseYear; }
bool Media::getIsAvailable() const { return isAvailable; }
int Media::getBorrowedByUserId() const { return borrowedByUserId; }

void Media::setTitle(const std::string& newTitle) { title = newTitle; }
void Media::setReleaseYear(int year) { releaseYear = year; }
void Media::setAvailable(bool status) { isAvailable = status; }
void Media::setBorrowedByUserId(int userId) { borrowedByUserId = userId; }

void Media::printDetails(std::ostream& os) const {
    os << "[" << getType() << "] ID: " << id
           << ", Tytul: " << title
           << ", Rok: " << releaseYear
           << ", Status: " << (isAvailable ? "dostepny" : "wypozyczony");
}

double Media::calculateLateFee(int /*daysOverdue*/) const {
    return 0.0;
}

std::string Media::getType() const {
    return "Media";
}

bool Media::operator==(const Media& other) const {
    return id == other.id;
}

std::ostream& operator<<(std::ostream& os, const Media& media) {
    // Wywolanie polimorficzne: dziala poprawnie dla kazdego typu pochodnego.
    media.printDetails(os);
    return os;
}
