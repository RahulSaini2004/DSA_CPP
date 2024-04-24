// <----------------------------functions-------------------->
// #include <iostream>
// using namespace std;
// void rahul() {
//   cout << "hello rahul";
// }
// int main() {
//   rahul();
// }

// <-------------------int-functions---------------->
// #include <iostream>
// using namespace std;
// int rahul() {
//   cout << "hello rahul";
// }
// int main() {
//   rahul();
// }


// <----------------functions with parements-------------------->
// #include <iostream>
// using namespace std;
// int rahul(int a, int b) { 
//   return a + b;
// }
// int main() {
//  int a,b;
//   cout<<"Enter your value =>";
//   cin>>a;
//   cin>>b;
//   int add = rahul(20,30);
//   cout << add<<endl; 
// }

// <-----------------------------pass by value ----------------------------->
// #include <iostream>
// using namespace std;
// void rahul(int &a) {
//   a =10;
//   cout << "copied value is =>" << a << endl;
// }
// int main() {
//   int a ;
//   cin>>a;
//   rahul(a);
//   cout<<"Enter your value =>";
//   cin>>a;
// }



// <----------------OOPS-------------------->
// #include <iostream>
// using namespace std;
// class rahul{
//   public:
//   int a;
// };
// int main(){
//   rahul r;
//   r.a=10;
//   cout<<r.a; 
// };



// <----------------OOPS-FUN-------------------->
// #include <iostream>
// using namespace std;
// class rahul{
//   public:
//   int a;\
// };
// int main(){
//   rahul r;
//   r.a=10;
//   cout<<r.a;
// };


// <-------------------------------------->
// #include <iostream>
// using namespace std;
// class Rahul{
// public:
//     int sum(float a, float b, float c, float d, float e, float f){
//         float sum = a + b + c + d + e + f;
//         return sum;
//     }
// };
// int main(){
//     float a, b, c, d, e, f;

//     cout << "enter your hindi vale => ";
//     cin >> a;
//     cout << "enter your math vale => ";
//     cin >> b;
//     cout << "enter your sst  vale  => ";
//     cin >> c;
//     cout << "enter your science vale => ";
//     cin >> d;
//     cout << "enter your english vale  => ";
//     cin >> e;
//     cout << "enter your gk vale => ";
//     cin>>f;
   
//     Rahul obj;

//     float sum =  obj.sum(a, b, c, d, e, f);
//     cout<<"your sum is =>"<<sum<<endl;

    
//     float per = (sum/600)*100;
//     cout<<"presentage is "<<per;

// }


// <-------------------------pass by value-------------------------->
// #include <iostream>
// using namespace std;
// void k(int b){
//     b++;
//     cout<<"b"<<b<<endl;
// }
// int main(){
//     int a = 10;
//     k(a);
//     cout<<"a"<<a;
// }

// <-----------------------pass by Refrance---------------------------------->
// #include <iostream>
// using namespace std;
// void k(int &b){
//     b++;
//     cout<<"b"<<b<<endl;

// }

// int main(){
//     int a = 10;
//     k(a);
//     cout<<"a"<<a;
// }



// <----------------oops-------------------->
// #include <iostream>
// using namespace std;
// class Rahul {
// public:
  
//   string  hindi, math, sst, science, english;
//   void rahul() {
//   cout << "enter your hindi vale => ";
//   cin >> hindi;
//   cout << "enter your math vale => ";
//   cin >> math;
//   cout << "enter your sst  vale  => ";
//   cin >> sst;
//   cout << "enter your science vale => ";
//   cin >> science;
//   cout << "enter your english vale  => ";
//   cin >> english;

//   cout << "enter your hindi vale  => ">>hindi<<endl;
//   cout << "enter your math vale  => ">>math<<endl;
//   cout << "enter your sst vale  => ">>sst<<endl;
//   cout << "enter your science vale  => ">>science<<endl;
//   cout << "enter your english vale  => ">>english<<endl;
// }
// };

// int main() {

//   Rahul r;
//   r.rahul();
//   r.rahul();
//   r.rahul();
//   r.rahul();
//   r.rahul();
// };


// <<-------------------------------------------->>
