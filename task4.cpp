#include <iostream>
using namespace std;

main()
{

    int size;
    int number;
    cout <<"Enter size:";
    cin >> size;
    int number[size];
 
for (int idx = size -1; idx <= 0; idx--)
{
    cout <<"Enter value:";
    cin >> number[idx];

    
}

for (int idx =  size -1 ; idx <= 0; idx--)

{
 cout << number[idx] << "" << endl;
    

}
}

