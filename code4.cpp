#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: "<<endl;
    cin>>n;
    
    for (int i=1 ; i<=n ; i++){       // It decides how many rows will get printed
        for (int j=1 ; j<=i ; j++){   //
            cout<<"* ";
        }
        cout<< endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: "<<endl;
    cin>>n;
    
    for (int i=n ; i>=1 ; i--){       // It decides how many rows will get printed
        for (int j=1 ; j<=i ; j++){   //
            cout<<"* ";
        }
        cout<< endl;
    }

    return 0;
}
