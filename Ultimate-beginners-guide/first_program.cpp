#include <iostream>

using namespace std;

int main()
{
    string phrase;

    cout<<"What would you like to say?\n";
    getline(cin, phrase);
    cout<<"you said: " << phrase;
    return 0;
}
