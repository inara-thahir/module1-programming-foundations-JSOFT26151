#include <iostream>
using namespace std;

int main()
{
    int n, marks[100], total = 0;
    int high, low, pass = 0, fail = 0;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter mark: ";
        cin >> marks[i];

        total = total + marks[i];
    }

    high = low = marks[0];

    for (int i = 0; i < n; i++)
    {
        if(marks[i] > high)
            high = marks[i];

        if(marks[i] < low)
            low = marks[i];

        if(marks[i] >= 40)
            pass++;
        else
            fail++;
    }

    cout << "\nTotal = " << total;
    cout << "\nAverage = " << (float)total / n;
    cout << "\nHighest = " << high;
    cout << "\nLowest = " << low;
    cout << "\nPassed = " << pass;
    cout << "\nFailed = " << fail;

    return 0;
}