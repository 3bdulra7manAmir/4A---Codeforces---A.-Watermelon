// A. Watermelon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int W;
    cout << "Please Enter Watermelon's Weight = ";
    cin >> W;

    if(W % 2 == 0 && W != 2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

}

