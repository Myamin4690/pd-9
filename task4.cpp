#include <iostream>
#include <string>

using namespace std;

int main() {
    int boom[]={};
    int size;
    for( int i=0;i<size;i++){
        cout<<"Enter your numbers:";
        cin>>boom[i];
        if(boom[i]==7){
            cout<<"Boom!";
            break;
        }else{
            cout<<"there is no 7 in the array.";
        }
    }cout<<endl;
 

    return 0;
}
