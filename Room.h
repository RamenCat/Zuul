#include <iostream>
#include <map>
#include <vector>
#include <cstring>
using namespace std;
class Room{
 public:
  Room (char* description);
  char* getDesc();
  void printDesc();
  void mkExit(char* thing, Room *room);
  char* getNext(char* exit);
 private:
  map<char*, Room*> mini;
  char* description;
