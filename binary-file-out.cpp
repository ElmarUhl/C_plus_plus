#include<iostream>
#include<fstream>

using namespace std;

struct Student {
   int roll_no;
   string name;
};

int main() {
   ofstream wf("student.bin", ios::out | ios::binary);
   if(!wf) {
      cout << "Cannot open file!" << endl;
      return 1;
   }

   Student wstu[3];

   wstu[0].roll_no = 1;
   wstu[0].name = "Ram";
   wstu[1].roll_no = 2;
   wstu[1].name = "Shyam";
   wstu[2].roll_no = 3;
   wstu[2].name = "Madhu";

   for(int i = 0; i < 3; i++)
      wf.write((char *) &wstu[i], sizeof(Student));
   wf.close();

   if(!wf.good()) {
      cout << "Error occurred at writing time!" << endl;
      return 1;
   }

}
