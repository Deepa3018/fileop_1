#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    ofstream MyFile("rand_1.txt");
    MyFile<<"This is 12th week of programming I Class"<<endl;
    MyFile<<"Project Presentations are done Week13 and Week 14"<<endl;
    MyFile<<"Final Exams will be on December 7th"<<endl;
    MyFile<<"Week 16 will be a make up week"<<endl;
    MyFile<<"Good luck with your final exams"<<endl;
    MyFile.close();
   string line;
  ifstream myfile ("rand_2.txt");
if (myfile.is_open())
  {
   while ( getline (myfile,line) )
     {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";
    return 0;
}
