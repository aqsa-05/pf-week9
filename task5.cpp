#include <iostream>
using namespace std;

main()
{

    int size;
    int num;
    cout <<"Enter size:";
    cin >> size;
    int number[size];
    int product;
 
for (int idx =0; idx < size; idx++)
{
    cout <<"Enter value:";
    cin >> number[idx];

    
}
cout <<"Enter number:";
cin >> num;
for (int idx =0; idx < size; idx++)
{
product = num* number[idx];
cout <<" product is" << product << endl;

}
}

