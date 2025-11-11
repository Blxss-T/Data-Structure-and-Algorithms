#include <iostream>
using namespace std;

class Student {
public :
    int code ;
    string name;
    string school;
    Student *next;
    Student(int c, string fname, string school) {
        code =c;
        name= fname;
        school= school;
        next = nullptr;
    };
    void display() {
        while (head!=nullptr) {
            cout<<head->code
        }
    }
    int main () {
        Student *s1=new Student(101,"Dog","RCA");
        Student *s2=new Student(102,"Dogy","RCA");
        Student *s3=new Student(103,"Doggy","RCA");
        s1->next=s2;
        s2->next=s3;
        display(s1);

    }





};