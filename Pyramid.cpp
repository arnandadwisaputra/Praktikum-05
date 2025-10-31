#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Height: ";
    cin >> height;

    for (int row = 1; row <= height; ++row) {
        for (int col = 0; col < height - row; ++col)
            cout << " ";              
        for (int col = 0; col < (2 * row - 1); ++col)
            cout << char(219);        
        cout << endl;
    }

}
