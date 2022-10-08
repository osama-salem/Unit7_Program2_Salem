#include <iostream>
#include <string>
using namespace std;

struct timeOfDay{
  short Hour;
  short Minute;
  short Second; 
};

struct appDate{
  short dayOfMonth;
  short month;
  int year;
};

struct event{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
};

void time(event &);
void date(event &);
void events(event &);
void ev(event &);

int main() {
  
  event o;
  events(o);
  date(o);
  time(o);
  ev(o);

  return 0;
}

void time(event &o){
  
o.eventTime.Hour = 9;
o.eventTime.Minute = 15;
o.eventTime.Second = 32;
  
cout << o.eventTime.Hour << ":" << o.eventTime.Minute << ":" << o.eventTime.Second << endl;
}

void date(event &e){
  
e.eventDate.dayOfMonth = 1;
e.eventDate.month = 10;
e.eventDate.year = 22;
  
cout << e.eventDate.dayOfMonth << "/" << e.eventDate.month << "/" << e.eventDate.year << endl;
}

void events(event &o){
  
o.eventName = "Final Exam";
o.isUrgent = true;
  
cout << o.eventName << " is ";
  
if(o.isUrgent == true)
  cout << "urgent\n";
else
  cout << "not urgent\n";
}

void ev(event &o){
  cout << endl;
  o.eventName = "Concert";
  o.isUrgent = false;
  cout << o.eventName << " is ";
  if(o.isUrgent == true)
    cout << "urgent\n";
  else
    cout << "not urgent\n";
  time(o);
  date(o);
}