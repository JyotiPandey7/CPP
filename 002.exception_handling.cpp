#include <iostream>

using namespace std;

int main() {
    cout << "Main Function Started" << endl;
    int start = 0, end = 0;
    try {
        start = 1;
        if(start > 0) {
            throw start;
            cout << "This will not execute" << endl;
        }
        cout << "This will not execute" << endl;
    }
    catch (int str) {
        cout << "Abort the Application" << endl;
    }
    cout << "Main function ended" << endl;
    return 0;
}