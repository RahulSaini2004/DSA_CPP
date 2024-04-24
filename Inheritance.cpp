// // <---------------------Inheritance------------------>
// #include <iostream>
// using namespace std;
// class Rahul{
//   public:
//   string name;
//   void rahul(){
//     cout<<"ram";
//   }
// };
// class Rahul1:public Rahul{};
// int main(){
//   Rahul1 obj;
//   obj.rahul();
// };


// // <---------------------Inheritance------------------>
// #include <iostream>
// using namespace std;

// class BankAccount {
// protected:
//     double balance;

// public:
//     BankAccount() : balance(0) {}

//     void displayBalance() const {
//         cout << "Current balance: " << balance << endl;
//     }
// };

// class DepositAccount : public BankAccount {
// public:
//     void deposit() {
//         double amount;
//         cout << "Enter deposit amount: ";
//         cin >> amount;
//         if (amount > 0) {
//             balance += amount;
//             cout << "Deposited: " << amount << endl;
//         } else {
//             cout << "Invalid deposit amount" << endl;
//         }
//     }
// };

// class WithdrawalAccount : public BankAccount {
// public:
//     void withdraw() {
//         double amount;
//         cout << "Enter withdrawal amount: ";
//         cin >> amount;
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             cout << "Withdrawn: " << amount << endl;
//         } else {
//             cout << "Invalid or insufficient funds for withdrawal" << endl;
//         }
//     }
// };

// int main() {
//     DepositAccount depositAccount;
//     WithdrawalAccount withdrawalAccount;

//     depositAccount.deposit();
//     depositAccount.displayBalance();

//     withdrawalAccount.withdraw();
//     withdrawalAccount.displayBalance();

//     return 0;
// }


// // <---------------------Inheritance------------------>
// #include <bits/stdc++.h>
// using namespace std;

// class addMoney{
//     public:
//     int moneys;
//     void money(){
//         cout<<"enter your amuote =>"<<endl;
//         cin>>moneys;
//     }
// };

// class myclass2:public addMoney{
//     public:
//     int withdrow_money,afterMoney;
//     void withdrow(){
//         cout<<"enter your withdrow money =>";
//         cin>>withdrow_money;
//         if(withdrow_money>=moneys){
//             cout<<"sorry";
//         }else{
//             afterMoney = moneys-withdrow_money;
//             cout<<"withdrow money "<<withdrow_money<<endl;
//             cout<<"after withdrow "<<afterMoney<<endl;
//         }

//     }
// };


// int main(){
//     myclass2 myobj2;
//     myobj2.money();
//     myobj2.withdrow();
// return 0;
// };

// // <---------------------Inheritance------------------>
// #include <iostream>
// using namespace std;
// class AddMoney {
// private:
//     int moneys;
// public:
//     void setMoney() {
//         cout << "Enter your amount => ";
//         cin >> moneys;
//     }
//     int getMoney() const {
//         return moneys;
//     }
// };
// class MyClass2 : public AddMoney {
// private:
//     int withdrawMoney;
// public:
//     void withdraw() {
//         cout << "Enter your withdrawal money => ";
//         cin >> withdrawMoney;
//         if (withdrawMoney >= getMoney()) {
//             cout << "Sorry, insufficient funds." << endl;
//         } else {
//             int afterMoney = getMoney() - withdrawMoney;
//             cout << "Withdrawn money: " << withdrawMoney << endl;
//             cout << "After withdrawal: " << afterMoney << endl;
//         }
//     }
// };
// int main() {
//     MyClass2 myObj2;
//     myObj2.setMoney();
//     myObj2.withdraw();
//     return 0;
// };

////*******************************************************////
// #include <iostream>
// using namespace std;

// class MoneyManager {
// private:
//     double balance;

// public:
//     MoneyManager() : balance(0.0) {}

//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             cout << "Deposited: $" << amount << endl;
//             displayBalance();
//         } else {
//             cout << "Invalid deposit amount." << endl;
//         }
//     }

//     void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             cout << "Withdrawn: $" << amount << endl;
//             displayBalance();
//         } else {
//             cout << "Invalid withdrawal amount or insufficient funds." << endl;
//         }
//     }

//     void displayBalance() {
//         cout << "Current Balance: $" << balance << endl;
//     }
// };

// int main() {
//     MoneyManager account;
//     int choice;
//     double amount;

//     do {
//         cout << "\nMoney Management Program\n";
//         cout << "1. Deposit\n";
//         cout << "2. Withdraw\n";
//         cout << "3. Display Balance\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter the amount to deposit: $";
//                 cin >> amount;
//                 account.deposit(amount);
//                 break;
//             case 2:
//                 cout << "Enter the amount to withdraw: $";
//                 cin >> amount;
//                 account.withdraw(amount);
//                 break;
//             case 3:
//                 account.displayBalance();
//                 break;
//             case 4:
//                 cout << "Exiting program. Goodbye!\n";
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again.\n";
//         }
//     } while (choice != 40);

//     return 0;
// }

/******************************ex.*************************/
// #include <iostream>
// using namespace std;

// class Rahul {
// protected:
//     int a = 10;
// };

// class Ram : protected Rahul {
// public:
//     void myfun() {
//         cout << a;
//     }
// };

// int main() {
//     Ram myobj;
//     myobj.myfun();

//     return 0;
// }

// <----------------------------------TASK----------------------------------->
// <********************************task answar************************************>?
// #include <iostream>
// using namespace std;

// class amount{
//     public:
//     int current_amount = 0;
//     int add_amount;
//     int money(){
//     cout<<"your current balance is = "<<current_amount<<endl;
//     cout<<"Enter the balnce that you want to add = ";
//     cin>>add_amount;
//         cout<<"your current account balance is = "<<add_amount<<endl;
//         return 0;
//     };
// };
// class withdrawal_balance: public amount{
//     public:
//     int withrawal_money(){
//         int mywithdraw;
//         cout<<"Enter the amount that you want to withdraw = ";
//         cin>>mywithdraw;
//         if(add_amount >= mywithdraw){
//             cout<<"the withdrawal amount is = "<<mywithdraw<<endl;
//         }
//         else{
//             cout<<"insufficient balance"<<endl;
//             cout<<"your current account balance is = "<<add_amount<<endl;         
//             return 0;
//         };
//         int total = add_amount - mywithdraw;
//         cout<<"your total balance is = "<<total;
//     };
// };
// int main(){
//     withdrawal_balance myobj;
//     myobj.money();
//     myobj.withrawal_money();
// }

// <----------------------------------TASK----------------------------------->
// <*************************task answar*********************>?
// #include <iostream>
// using namespace std;

// class Amount {
// public:
//     int amounts, rechargeplan;
//     string Name, SIM, number;

//     void rahul() {
//         cout << "Enter your amount =>" << endl;
//         cin >> amounts;
//         cout << "Enter your Name =>" << endl;
//         cin >> Name;
//     }
// };

// class Plan : public Amount {
// public:
//     void plans() {
//         cout << "Enter your SIM =>" << endl;
//         cin >> SIM;
//         cout << "Enter your number =>" << endl;
//         cin >> number;
//         while (number.size() != 10) {
//             cout << "Minimum ten digits required! " << endl;
//             cin >> number;
//         }
//     }
// };

// class Recharge : public Plan {
// public:
//     void Recharges() {
//         cout << "Enter your recharge plan =>" << endl;
//         cin >> rechargeplan;
//         if (rechargeplan > amounts) {
//             cout << "Your balance is low!" << endl;
//         } else {
//             cout << "Your plan was successful!" << endl;
//         }
//     }
// };

// int main() {
//     Recharge myobj;
//     myobj.rahul();
//     myobj.plans();
//     myobj.Recharges();
//     return 0;
// }


// <------------------------------Inheritance------------------------>
// #include <iostream>
// using namespace std;
// class raj{
//     public:
//     int a = 10;
// };
// class ram:public raj{
//     public:
//      int a = 20;
// };
// int main (){
//     ram obj;
//     cout<<"my 1st value => "<<obj.a<<endl;
//     cout<<"my 2nd value => "<<obj.raj::a;
// };

// <----------------------polymorphism oops--------------->
// <----------------------compiled time--------------->
// <----------------------function everloacling--------------->
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void display(int a, int b){
//         cout<<a+b;
//     }
//     public:
//     void display(int a, int b, int c){
//         cout<<a+b+c;
//     }
// };
// int main(){
//     A obj;
//     obj.display(10,20);
//     obj.display(10,20,30);
  
// }

// <----------------------operator overloading --------------->
// #include <iostream>
// using namespace std;
//   void display(int a, int b){
//       cout<<a+b;
//   }

//   void display(int a, int b, int c){
//       cout<<a+b+c;
//   }
// int main(){
//    display(10,20);
//    display(10,20,30);

// }


// <******************multabel*************>
// #include <iostream>
// using namespace std;
// class ram{
//     public:
//     void rahul(){

//     }
// };
// class raj:public ram{
//     public:
//     void low(){

//     }
// };
// int main(){
//     raj obj;
//     obj.rahul();

// }

// <---------------------------------------------------------------->


// #include <iostream>
// using namespace std;

// class A {
//     public:
//     void display(int a, int b){
//         cout<<a+b;
//     }
//     public:
//     void display(int a, int b, int c){
//         cout<<a+b+c;
//     }
// };

// class B {
//     public:
//     void display(int a, int b){
//         cout<<a+b;
//     }
//     public:
//     void display(int a, int b, int c){
//         cout<<a+b+c;
//     }
   
// };

// class C {
//     public:
//     void display(int a, int b){
//         cout<<a+b;
//     }
// };

// class D {
//     public:
// int main(int argc, char){
//     A obj;
//     B obj1;
//     C obj2;
//     obj.display(10,20);
//     obj1.display(10,20);
//     obj2.display(10,20);
//     return 0;
// }


// }

// <---------------------------------------------------------------->
// #include <iostream>
// using namespace std;

// class A {
//     public:
//     int value;
//     void operator-(A & a){
//         cout<<this->value-a.value;
//     }
// };

// int main(){
//     A obj1,obj2;
//     obj1.value = 110;
//     obj2.value = 20;
//     obj1-obj2;
//     // return 0;
// }



// <---------------------------------------------------------------->
// #include <iostream>

// using namespace std;

// class A {
//     public:
//     int value;
//     void operator-(A & a){
//         cout<<this->value-a.value;
//     }
// };

// int main(){
//     A obj1,obj2;
//     obj1.value = 110;
//     obj2.value = 20;
//     obj1-obj2;
//     // return 0;
// }

// <----------------------FUNCTION OVER--------------->
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void display(){
//         cout<<"My name is rahul"<<endl;
//     }
// };
// class B:public A{
//     public:
//     void display(){
//         cout<<"My name is saini"<<endl;
//     }
// };
// int main(){
//     A obj;
//     B obj1;
//    obj.display();
//    obj1.display();
//    obj1.A::display();
//    obj1.B::display();
// }



// // <--------------------------------
// #include <iostream>

// using namespace std;

// void dthRecharge() {
//     cout << "DTH Recharge selected. Recharge your DTH here." << endl;
//     // Add DTH recharge logic here
// }

// void gasFill() {
//     cout << "Gas Fill selected. Fill your gas here." << endl;
//     // Add gas fill logic here
// }

// void mobileRecharge() {
//     cout << "Mobile Recharge selected. Recharge your mobile here." << endl;
//     // Add mobile recharge logic here
// }

// int main() {
//     int choice;

//     do {
//         cout << "Menu:" << endl;
//         cout << "1. DTH Recharge" << endl;
//         cout << "2. Gas Fill" << endl;
//         cout << "3. Mobile Recharge" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice (1-1000): ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 dthRecharge();
//                 break;
//             case 2:
//                 gasFill();
//                 break;
//             case 3:
//                 mobileRecharge();
//                 break;
//             case 4:
//                 cout << "Exiting the program. Thank you!" << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please enter a number between 1 and 1000." << endl;
//         }

//     } while (choice != 1000);

//     return 0;
// }



