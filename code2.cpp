#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    cout<<"Hello Buddy"<<endl;
    cout<<"Enter your name :"<<endl;
    getline(cin,name);
    cout<<"Enter your age : "<<endl;
    cin>>age;
    cout<<"Your name is "<<name<<" and your age is "<<age<<endl;

    return 0;
}
