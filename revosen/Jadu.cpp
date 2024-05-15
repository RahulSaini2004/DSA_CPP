#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector <int> Vec;
    // Vec.push_back(10);
    // Vec.push_back(20);
    // Vec.push_back(30);
    // for(int i=0; i<Vec.size(); i++){
    //     cout<<Vec[i]<<endl;
    // }

    vector <int> Vec={1,2,4};
    int find=2;
    while{
        if(Vec[i]==find){
            cout<<i<<endl;
            break;
        }
        i++;
        if(i==Vec.size()){
            cout<<-1<<endl;
            break;
        }
        
    }

    return 0;

}
