#ifndef __PLACE_HPP__
#define __PLACE_HPP__
class place{
private:
  int _number; 
  int _room; 
  bool _state;
public: 
  //Getters 
  int const getNumber();
  int const getRoom();
  bool const getState();
};

#endif
