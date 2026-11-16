#pragma once

#include <iostream>
#include <string>

// Klasa bazowa reprezentujaca dowolny zasob biblioteki (ksiazke, film itp.).
class Media {
protected:
    int id;
    std::string title;
    int releaseYear;
    bool isAvailable;
    int borrowedByUserId;  // -1, jesli pozycja jest dostepna

public:
    Media();
    Media(int id, const std::string& title, int year);
    virtual ~Media() = default;

    // Gettery
    int getId() const;
    const std::string& getTitle() const;
    int getReleaseYear() const;
    bool getIsAvailable() const;
    int getBorrowedByUserId() const;

    // Settery
    void setTitle(const std::string& newTitle);
    void setReleaseYear(int year);
    void setAvailable(bool status);
    void setBorrowedByUserId(int userId);

    // Metody wirtualne (nadpisywane w klasach pochodnych)
    virtual void printDetails(std::ostream& os = std::cout) const;
    virtual double calculateLateFee(int daysOverdue) const;
    virtual std::string getType() const;

    // Operatory
    bool operator==(const Media& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Media& media);
};
