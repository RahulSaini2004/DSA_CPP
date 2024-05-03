#include <iostream>
#include <vector>
using namespace std; 

int findUnique(vector<int>values){
    int unique = 0;
    for(int i = 0; i < values.size(); i++){
        unique = unique ^ values[i];
    }
    return unique;
}

int main(){
    vector<int> values = {1,2,3,4,5,6,7,8,9,10};
    int unique =findUnique(values);
    cout<<"Unique value:" << unique << endl;
    return 0;

}
