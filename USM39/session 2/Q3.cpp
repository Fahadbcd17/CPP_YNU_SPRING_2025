#include <iostream>
using namespace std;

int main() {
    cout << "Find the Area and Perimeter of a Rectangle :\n";
    cout << "Input the length of the rectangle : ";
    double length;
    cin >> length;
    cout << "Input the width of the rectangle : ";
    double width;
    cin >> width;
    double area = length * width;
    double perimeter = 2 * (length + width);
    cout << "The area of the rectangle is : " << area << endl;
    cout << "The perimeter of the rectangle is : " << perimeter << endl;
    return 0;
}