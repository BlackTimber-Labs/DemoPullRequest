//
//  main.cpp
//  days numbers
//
//  Created by Mohd  Adnan on 07/09/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int x;
    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    switch (x) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout <<"Tuesday";
            break;
        case 3:
            cout <<"Wednesday";
            break;
        case 4:
            cout <<"Thrusday";
            break;
        case 5:
            cout <<"Friday";
            break;
        case 6:
            cout <<"Saturday";
            break;
        case 7:
            cout <<"Sunday";
            break;
            
    }
return 0;
}
