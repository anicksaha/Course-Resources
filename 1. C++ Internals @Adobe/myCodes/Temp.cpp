#include<bits/stdc++.h>
using namespace std;


class A {

public:
    void x(){
        cout<<"A::X"<<endl;
        bar();
    }
    void bar(){
        cout<<"heyya   1"<<endl;
    };
};

class B : public A {

public:

    void bar(){
    cout<<"heyya"<<endl;
    }
};

int main() {
    B b;
    b.bar();
    return 0;
}
