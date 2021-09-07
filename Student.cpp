#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;


// Assign studentId and name
void Student::assignDetails(int pStdID, char pname[]) {
  studentId = pStdID;
  strcpy(name, pname);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student Id : " << studentId <<endl;
  cout << "Name : " << name << endl; 
}
