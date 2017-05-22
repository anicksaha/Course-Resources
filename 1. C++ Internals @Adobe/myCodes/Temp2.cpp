#include<bits/stdc++.h>

using namespace std;


class ICircle {

public:
    virtual void Draw() = 0;

};

class IRectangle {

public:
    virtual void Draw() = 0;

};

void doCircleJob(ICircle *r) {

    cout<<"Circle job started!"<<endl;
    r->Draw();
    cout<<"Circle job ended!"<<endl;
}


void doRectangleJob(IRectangle *r) {

    cout<<"Rectangle job started!"<<endl;
    r->Draw();
    cout<<"Rectangle job ended!"<<endl;
}


class MyShape : public ICircle, public IRectangle {

public:

    virtual void Draw(){
        cout<<"Circle Shape Drawn"<<endl;
    }
};


int main(){
    MyShape sp;
    doCircleJob(&sp);
    cout<<"-------------------------------------------"<<endl;
    doRectangleJob(&sp);
    cout<<"-------------------------------------------"<<endl;
    return 0;
}
