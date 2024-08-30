#include <iostream>
using namespace std;
class area{
    public:
        virtual int calcArea() = 0;
};

class rectangle:area
{
    int l,b;
    public:
        void get(){
            cout<<"Enter length and breadth:";
            cin>>l>>b;
        }

        int calcArea(){
            return l*b;
        }
};
int main(){
    rectangle r;
    r.get();

    cout<<"Area = "<<r.calcArea()<<endl;

    return 0;
}