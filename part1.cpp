#include <iostream>
using namespace std;

const int pi = 3.1415;
int radius; 

int main(){
    int a;
    int b;

 cout << "Insert number A\n";
 cin >> a;
 cout << "Insert number B\n";
 cin >> b;
 cout << "\n\nBelow are the sum, diference, product, division, and remainder of number A and B.\n\n";
 cout << "The sum of A and B is " << a + b << endl;
 cout << "The difference of A and B is " << a - b << endl;
 cout << "The product of A and B is " << a * b << endl;
 cout << "The division of A and B is " << a / b << endl;
 cout << "The remainder of A and B is " << a % b << endl;


 cout << "We're also going to calculate the area of a circle with your desired radius, please insert the radius\n";
 cin >> radius;
 cout << "The area of this circle with radius " << radius << " is aproximatelly " << pi * radius * radius << endl;

 return 0;
} //this indentation is messed up but i'm too lazy to fix it if it works don't touch it 
