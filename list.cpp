#include <iostream>
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

  cout << "Enter first name" << endl;
  cin >> s.fName;
  
  cout << "Enter last name" << endl;
  cin >> s.lName;

  cout << "Enter student id" << endl;
  cin >> s.id;

  cout << "Enter gpa" << endl;
  cin >> s.gpa;
}

void print()
{

}

void del()
{

}

int main() 
{
  cout << "Would you like to ADD, DELETE, or PRINT" << endl;

  //cout << "Name: " << s.fName << endl;
  //cout << "Roll: " << s.id << endl;
  //cout << "Marks: " << s.gpa << endl;
}
