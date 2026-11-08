#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num[5] = {10,20,30,40,50};

        cout<<"Array elements: ";

        for(int i=0;i<5;i++)
        {
        cout<< num[i]<< " ";
        }

    cout<<endl;
    for(int i=0;i<5;i++)
    {
        sum=sum+num[i];
    }
  cout<<"Sum: "<<sum<<endl;
  return 0;
}
