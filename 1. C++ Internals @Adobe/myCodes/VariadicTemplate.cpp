#include<bits/stdc++.h>
using namespace std;

template<typename T>
T getAns(T x){
    return x;
}

template<typename T, typename... Remaining>
T getAns(T x, Remaining ...rem){
    return x+getAns(rem...);
}


template<typename... types>
class MyOverLoad;

template<typename T, typename... types>
class MyOverLoad<T,types...> : MyOverLoad<types...> {
  public:
      using MyOverLoad<types...>::AddFun;
      void AddFun(T x){
        cout<<x<<endl;
      }
};

template<typename T>
class MyOverLoad<T> {
public:
    //using MyOverLoad<types...>::AddFun;
      void AddFun(T x){
        cout<<x<<endl;
      }
};


int main(){
    cout<<getAns(1,2,3,4)<<endl;

    MyOverLoad<float, int, string> obj;
    obj.AddFun(1);
    obj.AddFun("anick");
    return 0;

}

