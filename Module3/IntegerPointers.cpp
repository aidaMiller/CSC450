#include <iostream>
#include <string>
using namespace std;

int main() {
int x;
int y;
int z;

cout << "Enter three values: " << endl;
cin >> x >> y >> z;

int * ptr1 = new int(x);
int * ptr2 = new int(y);
int * ptr3 = new int(z);

cout << "Contents of variables are: " << endl;
cout << " Value1: " << x << endl;
cout << " Value2: " << y << endl;
cout << " Value3: " << z << endl;
cout << endl;
cout << "Contents of pointer are: " << endl;
cout << "Pinter1: " << ptr1 << endl;
cout << "Pointer2 " << ptr2 << endl;
cout << "Pointer3: " << ptr3 << endl;

delete ptr1;
delete ptr2;
delete ptr3;

return 0;
}