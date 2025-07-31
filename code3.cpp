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
    if (age < 0){
        cout<<"Invalid age"<<endl;
    }
    else if(age<18){
        cout<<"You are minror "<<endl;
    }
    else if(age>=18 && age<60){
        cout<<"you are an adult "<<endl;
    }
    else{
        cout<<"You are a senior citizen."<<endl;
    }
        
    
     cout<<"Your name is "<<name<<" and your age is "<<age<<endl;

    return 0;
}
