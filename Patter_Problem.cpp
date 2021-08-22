#include<iostream>
using namespace std;
int main(){

/*
*****
****
***
**
*

*/
for(int i=1;i<=5;i++){
//
   for(int j=i;j<=5;j++){

        cout<<"*";

    }
    cout<<endl;

}

cout<<endl;

/*
*****
 ****
  ***
   **
    *

*/


for(int i=1;i<=5;i++){


    for(int j=1;j<=5;j++){

        if(i<=j){
            cout<<"A";
        }
        else {

            cout<<" ";
        }

    }

    cout<<endl;

}

cout<<endl;

/*

    X
   XX
  XXX
 XXXX
XXXXX

*/


for(int i=1;i<=5;i++){


    for(int j=1;j<=5;j++){

        if(i+j>5){
            cout<<"X";
        }
        else {

            cout<<" ";
        }

    }

    cout<<endl;

}

cout<<endl;

/*
X
XX
XXX
XXXX
XXXXX


*/

for(int i=1;i<=5;i++){


    for(int j=1;j<=5;j++){

        if(i+j>5){
            cout<<"X";
        }

    }

    cout<<endl;

}









}
