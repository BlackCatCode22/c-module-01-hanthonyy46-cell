#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout << "\n\n Welcome to My Reverse a String program! \n\n";
    string myStrToReverse = "A Long String to Reverse";
    cout << "\n The String before being reversed is: " << myStrToReverse;
    reverse(myStrToReverse.begin(), myStrToReverse.end());
    return 0;
}

int main() {
    string myStrToRevrse = "A Long String to Reverse";
    cout << "\n The String before being reversed is: " << myStrToRevrse;
    reverse(myStrToRevrse.begin(), myStrToRevrse.end());
    cout << "\n My reversed string is: " << myStrToRevrse;

    string myStr01 = "this is a literal string ";
    cout << "\n myStr01 is... " << myStr01;
    return 0;

}