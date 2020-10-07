#include <iostream>
#include <cstring>

using namespace std;

struct student
{
  char fName [25];
  char lName[25];
  int id;
  float gpa;
};

void add()
{
  student s;

  cout << "\nEnter first name" << endl;
  cin >> s.fName;
  
  cout << "\nEnter last name" << endl;
  cin >> s.lName;

  cout << "\nEnter student id" << endl;
  cin >> s.id;

  cout << "\nEnter gpa" << endl;
  cin >> s.gpa;

  cout << "Student entered!" << endl;
}

void print()
{

}

void del()
{

}

int main() 
{
  char cmd[10];
  char ADD[] = "ADD";
  char DELETE[] = "DELETE";
  char PRINT[] = "PRINT";

  cout << "Would you like to ADD, DELETE, or PRINT" << endl;
  cin >> cmd;

  if (strcmp(cmd,ADD) == 0)
  {
    cout << "add" << endl;
    add();
  }
  else if (strcmp(cmd,DELETE) == 0)
  {
    cout << "delete" << endl;
    del();
  }
  else if (strcmp(cmd,PRINT) == 0)
  {
    cout << "print" << endl;
    print();
  }
  else
  {
    cout << "yeaa baby";
  }

  //cout << "Name: " << s.fName << endl;
  //cout << "Roll: " << s.id << endl;
  //cout << "Marks: " << s.gpa << endl;
}
