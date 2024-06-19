#include<iostream>
using namespace std;

class point{
    private:
    int x, y;
    public:
    point(){
        cout<<"default conc"<<endl;
    }
    point(int a, int b){
        cout<<"defined"<<endl;
    }
};

int main(){
    point a;
    point *ptr = new point();
}