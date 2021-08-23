#include<iostream>
using namespace std;
void CallByValue(int a, int b){ // it is formal parameters, it changes happen only in this loop

int temp =b;
b=a;
a=temp;
cout<<"in call by value "<<a<<" "<<b<<endl; //30 20

}

void CallByAddress(int *a, int *b){ // it is formal parameters, it changes happen only in this loop

int temp =*b;
*b=*a;
*a=temp;
cout<<"in call by address "<<*a<<" "<<*b<<endl; //100 50

}

void CallByRefference(int &a, int &b){ // it is formal parameters, it changes happen only in this loop

int temp =b;
b=a;
a=temp;
cout<<"in call by refference "<<a<<" "<<b<<endl; //300 200

}



int main(){
int x=20,y=30;
int a=50,b=100; // actual value changes by call by address
int p=200,q=300; // actuall value changes by cal by refference

CallByValue(x,y);
CallByAddress(&a,&b);
CallByRefference(p,q);
cout<<endl<<endl;
cout<<"In main call by value"<<x<<" "<<y<<endl; //20 30
cout<<"In main call by address"<<a<<" "<<b<<endl; //100 50
cout<<"In main call by reffernce"<<p<<" "<<q<<endl; //300 200


}
