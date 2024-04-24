#include <iostream>
using namespace std;

// bool isprime(int n){
//     // if (n<=1)
//     // return false;
//     for (int i=2; i<n; i++)
//     {
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;

// }

// int main(){
//     int n;
//     cin >> n;

//     if(isprime(n)){
//         cout << "It is prime"<< endl;
//     }
//     else{
//         cout << "It is not prime"<< endl;
//     }
// }
// int main(){
    // int n=10;
    // n++;
    // cout << "n: " << n;
    // ++n;
    // cout << "n: " << n;

    // int a,b;  
    

// }

#include <iostream>
using namespace std;
int main()
{
  int arr[8] = {10,20,30,40,50,60,70,80};
    int size=8;
    int  start = 0;
    int end = size - 1;

    while (true){
        if (start>end){
            break;
        }
        else{
            cout<<arr[start];
            cout<<arr[end]<<endl;
            start++;
            end--;
        }
    }
  
}

