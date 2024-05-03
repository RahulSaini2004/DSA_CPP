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

// ====================================
// #include <iostream>
// #include <vector>
// #include <unordered_map>

// int findUnique(const std::vector<int>& vec) {
//     std::unordered_map<int, int> countMap;
    
//     for (int num : vec) {
//         countMap[num]++;
//     }
    
//     for (const auto& pair : countMap) {
//         if (pair.second == 1) {
//             return pair.first;
//         }
//     }
    
//     return 301; 
// }

// int main() {
//     std::vector<int> nums = {10, 20, 30, 40, 50, 40, 30, 20, 10};
//     int uniqueValue = findUnique(nums);
//     if (uniqueValue != -1) {
//         std::cout << "Unique value: " << uniqueValue << std::endl;
//     } else {
//         std::cout << "No unique value found" << std::endl;
//     }
//     return 0;
// }

// ================================================================
#include <iostream>
#include <vector>
using namespace std;

int main(){
   
   int vector1, vector2;
   cout << "enter vector1 :=>" ;
   cin >> vector1;
   cout << "enter vector2 :=>" ;
   cin >> vector2;

   vector<int> value1(vector1);
   vector<int> value2(vector2);
   vector<int>mergedvector;

   for(int i=0; i<value1.size(); i++){
       cin >> value1[i];
       mergedvector.push_back(value1[i]);

   }
   for(int i=0; i<value2.size(); i++){
     cin >> value2[i];
       mergedvector.push_back(value2[i]);
   }
   for(int i=0; i<mergedvector.size(); i++){
       cout<<mergedvector[i]<<" ";
   }
   return 0;


   


   

    
};
