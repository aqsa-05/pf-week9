#include <iostream>
using namespace std;

main()
{
 int array = 2;
 int number1[array];
 for (int idx =0; idx<array; idx++)
 {
    cout <<"Enter any value";
    cin >> number1[idx];

 }

 int size;
 cout <<"Enter size";
 cin >> size;
 float number2[size];
  for (int idx =0; idx<array; idx++)
  {
    cout <<"Enter value";
cin >>number2[idx];
  }
  cout <<number1[0]<<number2[size]<<number1[1];


 

   }
  
    


   

