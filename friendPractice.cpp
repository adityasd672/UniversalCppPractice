#include<iostream>
using namespace std;

class ankush;
class ankit{
    int money = 10;
    public:
        friend void rohit(ankit,ankush);
};

class ankush{
    int money = 20;
    public:
        friend void rohit(ankit,ankush);
};

void rohit(ankit a, ankush b){
    cout<<a.money+b.money<<endl;
}

int main(){
    ankit a;
    ankush b;
    rohit(a,b);
    return 0;
}