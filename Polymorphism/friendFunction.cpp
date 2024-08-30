#include <iostream>
using namespace std;

class sample;
class example{
    int a;
    public:
        void get(){
            cout<<"Enter a:";
            cin>>a;
        }

        friend int sum(example,sample);
};

class sample
{
    int b;
    public:
        void get(){
            cout<<"Enter b:";
            cin>>b;
        }

        friend int sum(example,sample);
};
int sum(example e, sample s){
    return e.a + s.b;
}
int main()
{
    example e;
    e.get();
    sample s;
    s.get();

    cout<<sum(e,s)<<endl;
    return 0;
}