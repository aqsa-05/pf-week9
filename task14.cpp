#include <iostream>
using namespace std;

main()
{
    string name;
    getline(cin,name);
    char letter;
    cout <<"Enter letter:";
    cin >> letter;
    int count = name.length();
    if ( name[count-1]== letter)
    {cout <<"True";}
    else
    {
        cout <<"False";
    }
    


    
    


}   

