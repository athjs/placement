#ifndef __PLACE_HPP__
#define __PLACE_HPP__
class place {
  private:
    int _number;
    int _room;
    bool _state;

  public:
    // Getters
    int getNumber() const;
    int getRoom() const;
    bool getState() const;

    // Setters
    void setNumber(int num);
    void setRoom(int numRoom);
    void setFree();
    void setTaken();

    // Constructors
    place();
    place(const int num);
    place(const int num, const int numRoom);
    place(const int num, const int numRoom, const bool state);

    void debug() const;
};

#endif
