// #include <iostream>
// using namespace std;

//  int main()
//  {
//     float arr [5]={};
//     cout << "Enter  Hindi marks : ";
//     cin >> arr[0];

//     cout << "Enter  English marks : ";
//     cin >> arr[1];

//     cout << "Enter  Maths marks : ";
//     cin>>arr[2];
     
//     cout << "Enter  GK marks : ";
//     cin >> arr[3];

//     cout << "Enter  SST marks :";
//     cin >> arr[4];

  

//     float totalMarks = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] ;
//     cout << "Total Marks  : " << totalMarks << endl;

//     float pers = (totalMarks / 500) * 100;

//     cout << " Total Percentage is : " <<pers<<endl;
// }







// <------------task-------------->
// #include <iostram>
// using namespace std;
// int main{
//     cout<<
    
// }


// #include <iostream>
// using namespace std;
// int main() {
  // cout << "Enter your the park car number =>";
  // int car_number;
  // // int id , cout=3;
  // cin >> car_number;

  //  for (int id= 1; id <= car_number; id++) {
  //   string arr [3] = {};

  //   cout<<"Enter your name =>";
  //   cin>>arr[0];

  //   cout<<"Enter your car number =>";
  //   cin>>arr[1];

  //   cout<<"Enter your id =>";
  //   cin>>arr[2];


  //   cout<<"Enter your name =>"<<arr[0]<<endl;
  //   cout<<"Enter your car number =>"<<arr[1]<<endl;
  //   cout<<"Enter your id =>"<<arr[2]<<endl;



  //   cout << id;

  //   cout << "\n";
  //  }


  

// }

  // ====================================

//   #include <iostream>

// int main() {
//     std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
//     std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
//     std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
//     std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;

//     return 0;
// }


// // ================================================================
// #include <iostream>

// double calculateAverage(int arr[], int size) {
//     double sum = 0.0;
//     for (int i = 0; i < size; ++i) {
//         sum += arr[i];
//     }
//     return sum / size;
// }

// int main() {
//     int size;
//     std::cout << "Enter the size of the array: ";
//     std::cin >> size;

//     int* arr = new int[size];

//     std::cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; ++i) {
//         std::cin >> arr[i];
//     }

//     double average = calculateAverage(arr, size);
//     std::cout << "Average of the elements: " << average << std::endl;
//     delete[] arr;

//     return 0;
// }


// ================================================================
// #include <iostream>

// using namespace std;

// int main() {
//   int a=100;
//   int b=200;
//   int c=300; 

//   int choice;

//     cout << "Welcome to our coffee shop!" << endl;
//     cout << "1. Espresso - 250" << endl;
//     cout << "2. Latte - 300" << endl;
//     cout << "3. Cappuccino - 350" << endl;

//     cin >> choice;
//     double gst = 0.18 ;
//     double totalAmount =  gst;

//     switch (choice) {
//       case 1:
//         cout << "250" << endl;
//         totalAmount = a*(1+gst);
//         break;
//       case 2:
//         cout << "300" << endl;
//         totalAmount = b*(1+gst);

//         break;
//       case 3:
//         cout << "350" << endl;
//         totalAmount = c*(1+gst);

//         break;
//       default:
//         cout << "Invalid choice" << endl;
//         break;
//     }
//     cout << "Total amount: " << totalAmount << endl;
//     return 0;
// }


// // ================================================================
  #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No of coffees you want to add : "<<endl;
    cin>>n;
    
    string name[n] = {};
    int price[n] = {};
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter name of coffee : "<<endl;
        cin>>name[i];
        
        cout<<"Enter price of coffee : "<<endl;
        cin>>price[i];
    }
    cout<<endl;
    cout<<"*************** Select Coffee *****************"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<i+1<<". "<<name[i]<<" "<<"₹ "<<price[i]<<endl;
    }
    
    int which;
    cout<<endl;
    cout<<"Enter which coffee you want : ";
    cin>>which;
    
    int quantity;
    
    for(int i=0;i<n;i++){
        if(which==i+1){
            cout<<"Enter the quantity of coffee : ";
            cin>>quantity;
            cout <<" ₹ "<< (price[i] * quantity) * 1.18 << endl;

        }
}

}

// ================================================================
#include <iostream>
using namespace std;

int main() {
  

}
