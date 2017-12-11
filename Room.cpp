#include <iostream>
#include <cstring>
#include "Room.h"
using namespace std;
Room::Room(string* newDesc){
  description = newDesc;
}

string* Room::getDesc(){
  return description;
}

void Room::printDesc(){
  cout << description;
}

void Room::mkExit(char* thing, Room *room){
  char* thing = new char[sizeof(str)+1];
  strcpy(thing, str);
  exits[thing] = room;
}

Room* Room::getNext(char* exit){
  if(exits.find(exit) != exits.end()){
    return exits[exit];
  } else{
    return 0;
  }
}
