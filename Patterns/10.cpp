#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << "  ";
        }
        
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        
        ch -= 2;
        for (int j = 0; j < i; j++) {
            cout << ch << " ";
            ch--;
        }
        
        cout << endl; 
    }

    return 0;
}