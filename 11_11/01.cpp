#include <iostream>

using namespace std;

int main()
{
    string s = "Hello world!";
    string cs = s + ' ' + s;
    if (s == cs) cout << "same value" << endl;
    cout << s[0] << endl;
    return 0;
}