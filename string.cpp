#include<iostream>
using namespace std;
 int main()
 {
    string s1;
    string s2;
    int l1,l2;
    cout<<"enter string s1"<<endl;
    cin>>s1;
    cout<<"enter string s2"<<endl;
    cin>>s2;
    l1=s1.size();
    l2=s2.size();
    if(l1==l2)
    {
        cout<<"strings are same"<<endl;
        
    }
    else if(l1>l2)
    {
        cout<<"s1 is greater than s2"<<endl;
    }
    else
    {
        cout<<"s2 greater than s1"<<endl;
    }
    
 }