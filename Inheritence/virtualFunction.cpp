#include <iostream>
using namespace std;

class animal{
    public:
        void walk(){
            cout<<"Walking";
        }
};

class waterAnimal:virtual public animal{
    public:
        void swimming(){
            cout<<"Swimming"<<endl;
        }
};

class landAnimal:virtual public animal{
    public:
        void running(){
            cout<<"Running"<<endl;
        }
};

class human:public landAnimal,public waterAnimal{
    public:
        void talking(){
            cout<<"Talking"<<endl;
        }
};

int main(){
    human aditya;
    aditya.walk();
    return 0;
}