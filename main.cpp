#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    vector<pair<string,int>> m;
    string s ;
    char c  ;

    cout << "Welcome to basic to do list application!" << endl ;
    start :
        cout << "1. To add Task" << endl
            << "2. To view your current task" << endl
            << "3. Exit" << endl
            << "Enter your choice :";

    cin >> n ;
    switch(n)
    {
    case 1:

        while(true)
        {
            cout << "Enter your task :" << endl ;
            cin >> s ;
            m.push_back({s,0});
            yn :
                cout << "Do you want add another task ? [Y/N]"<< endl ;
            cin >> c ;
            if(c=='Y'||c=='N')
            {
                if(c=='N')
                {
                    break ;
                }
            }
            else {
                cout << "Enter only [Y/N] " << endl ;
                goto yn ;
            }

        }

        goto start ;
        break ;
    case 2 :

        if(m.empty())
        {
            cout << "You have not added any task yet." << endl ;
        }
        else
        {

            for(auto &t : m)
            {
                if(t.second == 0)
                {
                    y :
                        cout << t.first << endl << "Mark as complete [Y/N]" << endl ;
                    cin >> c;
                    if(c=='Y'||c=='N')
                    {
                        if(c=='Y')
                        {
                            t.second = 1 ;
                        }
                    }
                    else {
                        cout << "Enter only [Y/N] " << endl ;
                        goto y;
                    }
                    break ;


                }
            }

        }
        goto start ;
        break ;
    case 3 :
        break ;
    default :
        cout << "Invalid choice!!!" << endl ;
        goto start ;
        break ;

    }
    return 0;
}
