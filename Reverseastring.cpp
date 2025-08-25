
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    cout <<"\n\n Welcome to M Reverse a String program!\n\n";

    string myStringToReverse = "A Long String to Reverse";

    string myEasyReversedStr;
    cout << "\n The string before being reversed is: " << myStringToReverse;

    reverse(myStringToReverse.begin(), myStringToReverse.end());

    cout << "\n My reversed string is: " << myStringToReverse;

    cout << myStringToReverse << endl;
    return 0;


}