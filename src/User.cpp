#include "User.hpp"

User::User() : userId(0), fullName(""), age(0) {}

User::User(int userId, const std::string& fullName, int age)
    : userId(userId), fullName(fullName), age(age) {}

int User::getUserId() const { return userId; }
const std::string& User::getFullName() const { return fullName; }
int User::getAge() const { return age; }

void User::setFullName(const std::string& name) { fullName = name; }
void User::setAge(int newAge) { age = newAge; }

std::ostream& operator<<(std::ostream& os, const User& user) {
    os << "Uzytkownik ID: " << user.userId
       << ", Imie i nazwisko: " << user.fullName
       << ", Wiek: " << user.age;
    return os;
}
