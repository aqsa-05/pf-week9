#include <iostream>
using namespace std;

main()
{
int size;
cout <<"Enter size of array:";
cin >> size;
int number[size];
int largest = number[0];
for (int idx = 0; idx<size; idx++ )
{
   cout <<"ENter any value:";
   cin >> number[idx];
}
for (int idx = 0; idx<size; idx++ )
{
if(largest<number[idx])
{largest = number[idx];}
}
cout << "The largest number "<<largest<< endl;

   }
  
    


   

