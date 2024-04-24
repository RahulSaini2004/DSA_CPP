#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks =>";
    cin>>marks;
     if(marks<34)
    {
        cout<<"Your are fail:";
    }
    else if (marks<=35)
    {
        cout<<"Your gread F:"<<marks;
    }
    else if (marks<=40)
    {
        cout<<"Your gread E:"<<marks;
    }
    else if (marks<=60)
    {
        cout<<"Your gread D:"<<marks;
    }
    else if (marks<=70)
    {
        cout<<"Your gread C:"<<marks;
    }
    else if (marks<=80)
    {
        cout<<"Your gread B:"<<marks;
    }
    else if (marks<=100)
    {
        cout<<"Your gread A:"<<marks;
    }
   
    
}