#include <iostream>
#include <cstring>
#include<vector>

using namespace std;

struct student
{
  char* fName;
  char* lName;
  int id;
  float gpa;
};
//operator overload for struct
ostream &operator<<(ostream &os, const student &val) {
  os
    << "Name: " << val.fName << " " << val.lName
    << ", ID: " << val.id
    << ", GPA: " << val.gpa
    << endl;

  return os;
}

void add(vector<student*>*);

int main() 
{
  bool run = true;
  vector <student*>* list = new vector<student*>();

  char cmd[10];

  while (run == true)
  {
    cout << "\nWould you like to ADD, DELETE, or PRINT" << endl;
    cin >> cmd;

    if (strcmp(cmd,"ADD") == 0)
    {
      add(list);
      cout << "Student entered!" << endl;
      
    }
    else if (strcmp(cmd,"DELETE") == 0)
    {
      cout << "delete" << endl;
      
    }
    else if (strcmp(cmd,"PRINT") == 0)
    {
      for(vector<student*>::iterator i = list->begin(); i != list->end(); i++)
      {
        cout << **i;
      }
      cout << "print" << endl;
    }
    else
    {
      cout << "yeaa baby";
    }

  }
}
  void add(vector<student*>* paramlist)
  {
    student* s = new student();
    s->fName = new char[25];
    s->lName = new char[25];

    cout << "Enter first name" << endl;
    cin >> s->fName;

    cout << "Enter last name" << endl;
    cin >> s->lName;

    cout << "Enter id number" << endl;
    cin >> s->id;

    cout << "Enter GPA" << endl;
    cin >> s->gpa;

    paramlist->push_back(s);
  }
