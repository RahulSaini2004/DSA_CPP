#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vector1 = {1, 2, 4, 5};
    vector<int> vector2 = {6, 7,  9, 10};

    cout << "Vector 1: ";
    for (int num : vector1) {
        cout << num << " ";
    }
    cout<<endl;

    cout<< "Vector 2: ";
    for (int num : vector2) {
        cout << num << " ";
    }
    cout<<endl;

    cout << "Unbeal value: "<<endl;

}
