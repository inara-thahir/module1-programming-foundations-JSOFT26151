#include<iostream>
using namespace std;
int main()
{
    string s;
    cout <<"Enter a line: ";
    getline(cin,s);

    cout << "Characters: " << s.length() <<endl;

    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    cout << "Vowel count: " << count << endl;

    cout << "Reversed: ";
    for (int i = s.length() -1; i >= 0; i--)
    {
        cout << s[i];
    }
;
    cout << endl;

    string reversed = " ";
    for (int i = s.length() - 1; i >= 0; i--)
     {
        reversed += s[i];   
     }
    if (s == reversed) 
    cout << "Palindrome";
    else cout << " Not Palindrome";
    cout<<endl;
}

