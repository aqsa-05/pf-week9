#include <iostream>
using namespace std;

main()
{
    bool isSmallest = false;
    int size;
    int num;
    cout <<"Enter size:";
    cin >> size;
    int number[size];
    
 
for (int idx =0; idx< size; idx++)
{
    cout <<"Enter value:";
    cin >> number[idx];

    
}
cout <<"Enter number:";
cin >> num;
for (int idx =0; idx < size; idx++)
{
    if (num == number[idx])
    {
        isSmallest = true;
    }


}
if (isSmallest == true) 
{
    cout << "the smallest number"<< num<< endl;
}
else
{
    cout << " no number" << num<< endl;
}
}

