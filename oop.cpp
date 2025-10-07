#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    void display() {
        cout <<"Life is lifing"<<endl;
    }
};
class Student : public Person {

}
int main() {
    Person p;
    p.name = "John";
    p.age = 18;
    cout<<"My name is: "<<p.name<<" "<<"I am :"<<p.age<<"years old"<<endl;
    p.display();
}