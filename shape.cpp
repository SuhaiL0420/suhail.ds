#include<iostream>
using namespace std;

class Shape {
protected:
    float a, b;
public:
    Shape(float x = 0, float y = 0) : a(x), b(y) {}
    virtual void getData() = 0;
    virtual void printArea() = 0;
};

class Circle : public Shape {
public:
    void getData() override {
        cout << "Enter radius: ";
        cin >> a;
    }
    void printArea() override {
        float area = a * a * 3.14;
        cout << "Area of circle: " << area << endl;
    }
};

class Rectangle : public Shape {
public:
    void getData() override {
        cout << "Enter length and breadth: ";
        cin >> a >> b;
    }
    void printArea() override {
        float area = a * b;
        cout << "Area of rectangle: " << area << endl;
    }
};

class Triangle : public Shape {
public:
    void getData() override {
        cout << "Enter height and base: ";
        cin >> a >> b;
    }
    void printArea() override {
        float area = 0.5 * a * b;
        cout << "Area of triangle: " << area << endl;
    }
};

int main() {
    Circle circleObj;
    Shape* ptr = &circleObj;
    ptr->getData();
    ptr->printArea();

    Rectangle rectangleObj;
    ptr = &rectangleObj;
    ptr->getData();
    ptr->printArea();

    Triangle triangleObj;
    ptr = &triangleObj;
    ptr->getData();
    ptr->printArea();

    return 0;
}
