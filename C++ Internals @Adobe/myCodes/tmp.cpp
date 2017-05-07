#include<bits/stdc++.h>
#include<tuple>
using namespace std;
class CA {



public:
    int x, y;


    void foo(){
        cout<<"x = " <<x<<" y = " <<y<<endl;
    }
};


int main(){
    CA bar{11, 22};
    bar.foo();

    return 0;

}

