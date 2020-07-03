#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int u_counter=0, l_counter=0 ;

    string name;
    cin >> name;
    for (int i=0 ; i<name.length() ; i++)
    {
        if (isupper(name[i]))
        {


            u_counter++;
        }
        else if (islower(name[i]))
        {


            l_counter++;

        }
    }
    if (l_counter==u_counter)
    {
            transform(name.begin(), name.end(), name.begin(), ::tolower);
    cout << name << endl;


    }
    else if (l_counter<u_counter)
    {
         transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << name << endl;

    }
    else if (l_counter>u_counter)
    {
          transform(name.begin(), name.end(), name.begin(), ::tolower);
    cout << name << endl;
    }

}





