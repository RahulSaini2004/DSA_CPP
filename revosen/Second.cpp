// ----------------dsa vector------------
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[10];
    vector<int> values ={1,2,3,4,5,6,7,8,9,10};
    values.push_back(11);
    values.pop_back();
    for(int i=0;i<values.size();i++){
        cout<<values[i]<<endl;
    }
}
// ---------------------------expal-------------------------------
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cout << "Enter values: ";
    cin >> a;
    vector<int> arr(a); 
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < a; i++) {
        sum += arr[i];
    }
    cout << "Sum the value: " << sum << endl;

}
