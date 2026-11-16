#pragma once

#include <iostream>
#include <string>

// Czytelnik / klient wypozyczalni.
class User {
private:
    int userId;
    std::string fullName;
    int age;

public:
    User();
    User(int userId, const std::string& fullName, int age);

    int getUserId() const;
    const std::string& getFullName() const;
    int getAge() const;

    void setFullName(const std::string& name);
    void setAge(int newAge);

    friend std::ostream& operator<<(std::ostream& os, const User& user);
};
