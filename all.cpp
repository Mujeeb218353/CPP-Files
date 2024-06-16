#include <iostream>

using namespace std;

class Shape {  // define a Shape class
public:
    virtual void draw() = 0;  // define a pure virtual draw function
};

class Circle : public Shape {  // define a Circle subclass of Shape
private:
    int x, y, radius;

public:
    Circle(int x, int y, int radius) {
        this->x = x;
        this->y = y;
        this->radius = radius;
    }

    void draw() {
        cout << "Drawing a circle at (" << x << "," << y << ") with radius " << radius << endl;
    }
};

class Rectangle : public Shape {  // define a Rectangle subclass of Shape
private:
    int x1, y1, x2, y2;

public:
    Rectangle(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    void draw() {
        cout << "Drawing a rectangle from (" << x1 << "," << y1 << ") to (" << x2 << "," << y2 << ")" << endl;
    }
};

int factorial(int n) {  // define a recursive factorial function
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    // get user input
    int x;
    cout << "Enter a number: ";
    cin >> x;

    // use a switch statement to perform different actions based on user input
    switch (x % 3) {
        case 0:
            cout << x << " is divisible by 3" << endl;
            break;
        case 1:
            cout << x << " leaves a remainder of 1 when divided by 3" << endl;
            break;
        case 2:
            cout << x << " leaves a remainder of 2 when divided by 3" << endl;
            break;
    }

    // use an if else statement to perform different actions based on user input
    if (x > 10) {
        cout << x << " is greater than 10" << endl;
    } else {
        cout << x << " is not greater than 10" << endl;
    }

    // use a loop to iterate over an array of integers and print each element
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // use a pointer to access and modify a variable
    int y = 42;
    int *y_ptr = &y;
    cout << "y = " << y << endl;
    *y_ptr = 99;
    cout << "y = " << y << endl;

    // create objects of the Circle and Rectangle classes and call their draw functions using polymorphism
    Shape *shapes[2];
    shapes[0] = new Circle(10, 10, 5);
    shapes[1] = new Rectangle(20, 20, 30, 40);
    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }

    // use recursion to calculate the factorial of a number
    cout << "Factorial of " << x;
}
