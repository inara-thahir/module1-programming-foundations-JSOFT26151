#include<iostream>
using namespace std;

    class student
    {
        public:
        int rollno;
        string name;

        void display() {
            cout << rollno << " " << name << endl; 
        }
    };
    int main()
    {
        student s1;
        student s2;

        s1.rollno = 24;
        s1.name = "inara";
        s2.rollno = 23;
        s2.name = "farz";

        s1.display();
        s2.display();
        return 0;

    }

    
