#include <iostream>

using namespace std;

int main()
{
    string s = "Hello, world!";
    s.insert(7,"another ");
    cout << s << endl;
    return 0;
}