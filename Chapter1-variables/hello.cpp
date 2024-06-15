#include <iostream>
using namespace std;

int main()
{
     // int n;
     // cin >> n;
     // int vow;
     // vow = 0;
     // char arr[n];

     char str[100];
     int i, vow = 0;

     cout << "Enter : ";
     cin >> str;

     for (int i = 0; str[i]; i++)
     {
          if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
          {
               vow++;
          }
     }

     cout << vow ;

     return 0;
}