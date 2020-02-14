

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string bean;

    cout << "Maybe you need to type something... special...\n";
    cin >> bean;

    if (bean == "beans") {
        system("CLS");
        cout << "I am the bean boi.\n" "I got the most beans around.\n" "I will give you beans.\n" "If you're feeling down.\n" "But if you take my beans.\n" "Without permission.\n" "I'll cut your dick off.\n" "In my kitchen." << endl << endl;
        system("pause");
    }
    else
    {
        system("CLS");
        cout << "No, no, no. It has to be something more **BEANS**. Wink wink, nudge nudge.\n " << endl << "Honestly if you can get it now then i don't know if i can save you anymore.\n";
        cin >> bean;
        if (bean != "beans")
        {
            system("CLS");
            cout << "Are you actually retarded?\n" "You know what, no.\n" "You don't deserve to get the secret!\n";
            cin.get();
        };
    };


    cin.get();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/*
    I am the bean boi.
    I got the most beans around.
    I will give you beans.
    If you're feeling down.
    But if you take my beans.
    Without permission.
    I'll cut your dick off.
    In my kitchen.

*/
