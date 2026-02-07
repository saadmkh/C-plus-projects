#include <iostream>
using namespace std;

int main() {
    int number = 7;
    int input;

    
    for (int i = 1; i <= 3; i++) {
        cout << "\nGuess the number (1 to 10): ";
        cin >> input;

        if (input == number) {
            cout << "You win ";
            break;
        } 
        else if(input > number ){
            cout<<"number is smaller than "<<input;
        }
        else if(input < number ){
            cout<<"number is bigger than "<<input;
        }

        else {
            cout << "Wrong guess you have "<< endl;
        }
    }

    return 0;
}
