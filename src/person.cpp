#include "person.hpp"
#include <cstring>
#include <iostream>
#include <ostream>

using namespace std;
person::person() {}

// Getters
char *person::getName() const { return _name; }
char *person::getSurname() const { return _surname; }
char *person::getManager() const { return _manager; }
bool person::getContract() const { return _contract; }

// Setters
void person::setName(char *name) { _name = name; }
void person::setSurname(char *surname) { _surname = surname; }
void person::setManager(char *manager) { _manager = manager; }
void person::setContract() { _contract = true; }
void person::removeContract() { _contract = false; }
person::person(const char *name, const char *surname) {
    _name = new char[strlen(name)];
    _surname = new char[strlen(surname)];
    strcpy(_name, name);
    strcpy(_surname, surname);
}

person::person(const char *name, const char *surname, const char *manager) {
    _name = new char[strlen(name)];
    _surname = new char[strlen(surname)];
    _manager = new char[strlen(manager)];
    strcpy(_name, name);
    strcpy(_surname, surname);
    strcpy(_manager, manager);
}

person::person(const char *name, const char *surname, const char *manager,
               const bool contract) {
    _name = new char[strlen(name)];
    _surname = new char[strlen(surname)];
    _manager = new char[strlen(manager)];
    strcpy(_name, name);
    strcpy(_surname, surname);
    strcpy(_manager, manager);
    _contract = contract;
}

void person::debug() const {
    cout << _name << endl;
    cout << _surname << endl;
    cout << _manager << endl;
    _contract ? cout << "True" << endl : cout << "False" << endl;
}
person::~person() {
    if (_name)
        delete[] _name;
    if (_surname)
        delete[] _surname;
    if (_manager)
        delete[] _manager;
}

int main() { return 0; }
