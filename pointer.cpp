#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    int *ptr1;
    int *ptr2;
    int sum;
    int sub;

    cout<<"enter the numbers"<<endl;
    cin>>num1;
    cin>>num2;
    ptr1=&num1;
    ptr2=&num2;

    (*ptr1++);
    (*ptr2++);
    cout<<"after increment of pointer "<<endl;
    cout<<*ptr1;
    cout<<*ptr2;

    sum = *ptr1+*ptr2;
    cout<<"sum is equal to:"<<sum<<endl;

    (*ptr1--);
    (*ptr2--);
    cout<<"after decrement of pointer "<<endl;
    cout<<*ptr1;
    cout<<*ptr2;

    sub = *ptr1-*ptr2;
    cout<<"sum is:"<<sub<<endl;
    
    
}