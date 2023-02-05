#include <iostream>
using namespace std;

main()
{
    string name;
    char letter;
    getline(cin , name);
    cout <<"Enter letter:";
    cin >> letter;
     int idx = 0;
      bool isFound = false;

     while (name[idx]!= '\0')
     {
if (letter == name[idx])
{
    isFound = true;
    break;
}
idx=idx+1;
 }
if (isFound == true)
{cout<<" is found";}
else
{
    cout <<"not found"; 
}
    


}   

