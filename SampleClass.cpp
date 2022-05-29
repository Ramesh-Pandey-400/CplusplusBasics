#include <iostream>
using namespace std;

class SampleClass{

    public:

    void name(string name){
        cout<<"User which is currently working is "<<name;
    }
};
int main(){
    SampleClass sc;
    string name;
    cout<<"Please Enter Your Name ?\n";
    cin>>name;
    sc.name(name);
}