#include<bits/stdc++.h>
using namespace std;

class CA {

public:
    CA(int x){
        cout<<"In Ctor (int)."<<endl;
    }

    CA(string x){
        cout<<"In Ctor (string)."<<endl;
    }

    CA(string x, int y){
        cout<<"In Ctor (string,int)."<<endl;
    }
};

class SMPTR {
    CA obj;
public:
    // perfect forwarding
    template<typename... Args>
    SMPTR(Args ...args):obj(args...){
    }
};

int main(){
    SMPTR smp1(10);
    SMPTR smp2("abc");
    SMPTR smp3("abc",10);

    tuple<int, int, int> foo
    return 0;
}

