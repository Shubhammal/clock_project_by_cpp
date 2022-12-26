#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    int h, m, s, a, err;
    err = a = 0;
    while (err == 0)
    {
        cout << "Type hour : " << endl;
        cin >> h;
        cout << "Type minutes : " << endl;
        cin >> m;
        cout << "Type Seconds : " << endl;
        cin >> s;
        if (h < 24 && m < 60 && s < 60)
        {
            err++;
        }
        else
        {
            system("cls");
        }
    }
    while (a == 0)
    {
        system("cls");
        cout << h << ":" << m << ":" << s << endl;
        Sleep(1000);
        s++;
        if (s > 59)
        {
            s = 0;
            m++;
        }
        if (m > 59)
        {
            m = 0;
            h++;
        }
        if (h > 24)
        {
            s = 0;
        }
    }

    return 0;
}