#include <iostream>
#include <string.h>
#include <vector>
#include <cstring>
#include "Room.h"
using namespace std;
void mkRooms(vector<Room*> &rooms);

int main(){
  vector<Room*> rooms;
  mkRooms(rooms);
  cout << "Welcome!" << endl;
  
}

void createRooms(vector<Room*> &rooms){
  Room *farm, *trees;
  farm = new Room("farm");
  rooms.push_back(farm);
  trees = new Room("trees");
  rooms.push_back(trees);
  farm->mkExit("north", trees);
}

void move(char* cardinal, Room *&currentRoom){
  Room* next = currentRoom->getNext(cardinal);
  if(next != NULL){
    currentRoom = next;
    currentRoom->printDesc();
  }else{
    cout << "You run into the wall. Great job!" << endl;
  }
}
