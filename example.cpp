#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter size:";
    cin >> size;
float number[size];
 float sum = 0;
for (int idx = 0; idx <size; idx++)
{
    cout <<"Enter value:";
    cin >> number[idx];
}
for (int idx = 0; idx<size; idx++)
{
    sum = sum + number[idx];
    

}
float average = sum/size;
cout << "The sum is" << sum << endl;
cout <<"Average is"<< average << endl;
}

