#include <iostream>
using namespace std;

class example{
    public:
        virtual void show(){
            cout<<"Called from example."<<endl;
        }
};

class sample:public example{
    public:
        void show(){
            cout<<"Called from sample"<<endl;
        }
};

int main()
{
    example e,*e1;
    e.show();
    sample s;
    e1 = &s;
    e1->show();
    e1 = &e;
    e1->show();
    return 0;
}