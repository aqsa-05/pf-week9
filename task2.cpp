#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter size:";
    cin >> size;
float number[size];
 
for (int idx = 0; idx <size; idx++)
{
    cout <<"Enter value:";
    cin >> number[idx];
}
for (int idx = 0; idx<size; idx++)
{
    cout <<idx << number[idx] << endl;
    

}
}

