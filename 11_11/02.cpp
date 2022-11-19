#include <iostream>

using namespace std;

int main()
{
    string s = "Hello world!";
    cout << s.size() << endl;
    if (s.empty()) cout << "empty value" << endl;
    return 0;
}