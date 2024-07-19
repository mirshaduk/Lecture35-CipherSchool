#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string,int> hash;

    hash["rohit"] = 1;
    hash["programming"] = 2;
    hash["reddy"] = 3;

    cout<<"The valoe of rohit the hashable is "<<hash["c++"];
    
    for(auto j=hash.begin();j!=hash.end();j++)
    {
        cout<<"the key will be"<<j->first<<"The value in the key will be "<<j->second<<endl;
    }
}