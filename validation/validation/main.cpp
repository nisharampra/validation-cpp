//
//  main.cpp
//  validation
//
//  Created by Nisha Ramprasath on 26/10/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,c;
    cout<<"enter  2 no";
    cin>>a>>b;
    if(b==0)
        cout<<"division by zero"<<endl;
    else{
        c=a/b;
        cout<<c<<endl;
    }
}
