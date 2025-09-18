#include "place.hpp"
#include <iostream>

using namespace std;
place::place() {}
place::place(const int num) { _number = num; }
place::place(const int num, const int numRoom) {
    _number = num;
    _room = numRoom;
}
place::place(const int num, const int numRoom, const bool state) {
    _number = num;
    _room = numRoom;
    _state = state;
}

// Getters
int place::getNumber() const { return _number; };
int place::getRoom() const { return _room; }
bool place::getState() const { return _state; }

// Setters

void place::setNumber(int num) { _number = num; }
void place::setRoom(int numRoom) { _room = numRoom; }
void place::setFree() { _state = false; }
void place::setTaken() { _state = true; }

void place::debug() const {
    cout << _number << endl;
    cout << _room << endl;
    cout << _state << endl;
}
