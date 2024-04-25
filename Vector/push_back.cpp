// =============================int===============================
// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
//      vector<int>elements;
//     elements.push_back(7);
//     elements.push_back(7);
//     elements.push_back(7);
//     elements.push_back(10);

//     cout<<elements.size()<<endl;  

//     for(int i=0; i<elements.size(); i++){
//         cout<<elements[i]<<endl;
//     }
// }

// =========================string================================
// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<string>elements;
//     elements.push_back("7");
//     elements.push_back("7");
//     elements.push_back("7");
//     elements.push_back("10");
//     for(int i=0; i<elements.size(); i++){
//         cout<<elements[i]<<endl;
//     }

// }

// ===========================example==============================
// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>arr;
//     int size;
//     cout<<"enter size :";
//     cin>>size;

//     for(int i=0; i<size; i++)
//     {
//         cout<<"ernter :"<<i+1<<"value :";
//         int a;
//         cin>>a;
//         arr.push_back(a);

//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// ===========================reverse example ==================================

// #include <iostream>
// using namespace std;
// int main(){

//     int arr ;
//         cout<<"enter your number:=>";
//         cin>>arr;
//         int ram[arr];
//         cout<<"Enter " << arr<<" number :";
//     for(int i=0; i<arr; i++){
//         cin >> ram[i] ;
//     }
//     cout<<"reverse your number:=>"<<endl;
//     for(int i=0; i<arr/2; i++){
//         int arr2 = ram[i];
//         ram[i]=ram[arr-i-1];
//         ram[arr-i-1]=arr2;

//     }
//     for(int i=0; i<arr; i++){
//         cout<<ram[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
    
// }

