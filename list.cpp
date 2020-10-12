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
ostream &operator<<(ostream &os, const student &val) 
{
  os
    << "Name: " << val.fName << " " << val.lName
    << ", ID: " << val.id
    << ", GPA: " << val.gpa
    << endl;

  return os;
}

void add(vector<student*>*);
//void add(vector<student*>& paramlist);

int main() 
{
  bool run = true;
  vector <student*>* list = new vector<student*>();

  char cmd[10];

  while (run == true)
  {
    cout << "\nWould you like to ADD, DELETE, PRINT, or QUIT" << endl;
    cin >> cmd;

    if (strcmp(cmd,"ADD") == 0)
    {
      add(list);
      cout << "Student entered!" << endl;
      
    }
    else if (strcmp(cmd,"DELETE") == 0)
    {
      int ID;
      cout << "ID of student you want to delete: ";

      cin >> ID;
      int position = 0;
      for (vector<student*>::iterator j = list->begin(); j != list->end(); ++j)
      {
        if((*j) -> id == ID)
        {
          list->erase(list->begin() + position);
          break;
        }
        else
        {
          position++;
        }
      }

    }
    else if (strcmp(cmd,"PRINT") == 0)
    {
      for(vector<student*>::iterator i = list->begin(); i != list->end(); i++)
      {
        cout << **i;
      }
    }
    else if (strcmp(cmd,"QUIT") == 0)
    {
      exit(0);
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
