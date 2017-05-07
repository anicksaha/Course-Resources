#include<bits/stdc++.h>
#include <mutex>

using namespace std;

mutex A::_mutex;

class A {

    static A(){

    }

    static ~A(){

    }

    static A *ptr = nullptr;

public:

    static A* getInstance (){
        // CS Block
        _mutex.lock();
        if(ptr==nullptr){
            ptr=new A();
        }
        _mutex.unlock();
        //myLock.release()->unlock();
        // CS Block ends
        return ptr;
    }

    void foo(){
        cout<<"STSYSGAH"<<endl;
    }
};


int main(){

    A* myA = A::getInstance();
    myA->foo();

    return 0;
}
