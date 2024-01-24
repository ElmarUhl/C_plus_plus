#include<iostream>
#include<fstream>

using namespace std;
struct Student {
   int roll_no;
   string name;
};

int main() {
   ifstream rf("student.bin", ios::out | ios::binary);
   if(!rf) {
      cout << "Cannot open file!" << endl;
      return 1;
   }

   Student rstu[3];

   for(int i = 0; i < 3; i++)
      rf.read((char *) &rstu[i], sizeof(Student));

   rf.close();

   if(!rf.good()) {
      cout << "Error occurred at reading time!" << endl;
      return 1;
   }

   cout<<"Student's Details:"<<endl;
   for(int i=0; i < 3; i++) {
      cout << "Roll No: " << rstu[i].roll_no << endl;
      cout << "Name: " << rstu[i].name << endl;
      cout << endl;
   }
   return 0;
}

