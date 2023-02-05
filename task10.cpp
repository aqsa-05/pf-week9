#include <iostream>
using namespace std;

main()
{
    string name;
    getline(cin , name);
     int count = 0;
    while (name[count] != '\0')
    {
        count = count+1;

    }
    cout <<"Reverse string:";
    for( int idx = count; idx>=0; idx-- )
    {
        cout << name[idx];  
    }


}   

