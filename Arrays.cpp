#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[3], number;
    char ch;
    bool flag = true, num = false;
    while (flag)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            // Asking the continue of program
            if (arr[i] == 0)
            {
                flag = false;
            }
        }
    }
    flag = true;
    cout << "please enter a number" << endl;
    cin >> number;
    while (flag)
    {
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == number)
            {
                num = true;
                cout << "array number " << i + 1 << " is " << number;
                flag = false;
            }
        }
        if (num == false)
        {
            cout << "There is no array for this number you entered !!";
            flag = false;
        }
    }
    getch();
    return 0;
}