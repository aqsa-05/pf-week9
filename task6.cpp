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
 
for (int idx =size -1; idx <=0; idx--)
{
    cout <<"Enter value:";
    cin >> number[idx];

    
}
cout <<"Enter number:";
cin >> num;
for (int idx =size -1; idx < =0; idx--)
{
product = num* number[idx];
cout <<" product is" << product << endl;

}
}

