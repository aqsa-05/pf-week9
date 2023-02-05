#include <iostream>
using namespace std;

main()
{
    string name;
    getline(cin , name);
     int count = name.length();
    
    {
        cout << count << endl;

    }
    cout <<"Reverse string:";
    for( int idx = count; idx>=0; idx-- )
    {
        cout << name[idx];  
    }


}   

