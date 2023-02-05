#include <iostream>
using namespace std;

main()
{
int size;
cout <<"Enter size of array:";
cin >> size;
float resistance[size];
float totalR = 0;
for (int idx = 0; idx< size; idx++)
{
    cout <<"Enter values";
    cin >> resistance[idx];
}
for (int idx = 0; idx< size; idx++)
{
totalR = totalR + resistance[idx];

}
cout <<"TOtal resistance"<<totalR<< endl;


   }
  
    


   

