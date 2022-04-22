/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    const string RUN("RUN");
    string str;
    do
    {
        cout << "Hello, I'm a tool for calculating the lenght of the fence.\nTell me RUN if you want to start>";

        cin >> str;

        if (str == RUN)
        {
            break;
        }
        else
        {
            cout << "I told u: RUN ";
        }
    } while (true);

    string tmp;
    int fenceLenght = 0;

    do
    {

        cout << "How many meters of fence mesh do you have?:  ";
        cin >> tmp;

        try
        {
            fenceLenght = stoi(tmp);
        }
        catch (...)
        {
            cout << "invalid value '" << tmp << "'!\n";
            continue;
        }

        if (fenceLenght <= 0)
        {
            cout << "whether this fence mesh is made of antimatter?\n";
        }

    } while (fenceLenght <= 0);

    int s_max = 0;
    int a_max = 0;
    int b_max = 0;

    int a = 1;

    while ((2 * a) < fenceLenght)

    {
        int b = fenceLenght - (2 * a);

        int s = b * a;

        if (s > s_max)
        {
            s_max = s;
            a_max = a;
            b_max = b;
        }

        a = a + 1;
    }

    if (s_max > 0)
    {
        cout << "length a=" << a_max << "m, length b=" << b_max << "m, size of the animal enclosure=" << s_max << " mkw.\n";
    }
    else
    {
        cout << "it is not possible to calculate size of the animal enclosure - not enough fence mesh";
    }
    return 0;
}
