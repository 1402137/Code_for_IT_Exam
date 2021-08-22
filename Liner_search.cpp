#include<iostream>
using namespace std;
int main(){


    int arr[5]={2,3,5,6,7};
    int key;

    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"length:"<<len<<endl;

    cout<<"Enter a key whci you wan to find"<<endl;

    cin>>key;

    for(int i=0;i<len;i++){

        if(arr[i]==key){
            cout<<"Your key caontain the list"<<arr[i] <<" "<<endl;
            exit(0); //exit allows the C++ run-time termination processing to take place (global object destructors get called),
        }
    }

}
