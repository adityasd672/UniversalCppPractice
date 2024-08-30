#include <iostream>
using namespace std;

class sample;
class example{
    int a,b;
    public:
        void get(){
            cout<<"Enter a and b:";
            cin>>a>>b;
        }

        friend class sample;
};

class sample
{
    public:
        void disp(example e){
            cout<<"a = "<<e.a<<endl;
            cout<<"b = "<<e.b<<endl;
        }
};

int main()
{
    example e;
    e.get();
    sample s;
    s.disp(e);
    

    
    return 0;
}