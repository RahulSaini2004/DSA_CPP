#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>values(20,6);
    for(int i=0;i<20;i++){
        cout << values[i] << endl;
    }
    return 0;
}