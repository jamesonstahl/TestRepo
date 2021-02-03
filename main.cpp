#include <iostream>

using namespace std;

 void printName(int year){
     cout << "Jameson L. Stahl " << (year - 2000) << endl;
}

int main(int argc, const char * argv[]) {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    printName(year);

    return 0;
}