#include <iostream>

using namespace std;
class circle {
private:
    double radius;
    double PI=3.172;
public:
    circle(double r) {
        this->radius=r;
    }

    void area() {
        cout<<"The area of the circle is "<<(radius*radius)*PI<<endl;
    }
    void circumference() {
        cout<<"The circumference of the circle is "<<(2*radius)*PI<<endl;
    }

};
int main() {
    circle c1(5);
    c1.area();
    c1.circumference();
}