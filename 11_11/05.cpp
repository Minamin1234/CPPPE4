#include <iostream>

using namespace std;

int main()
{
    string s = "Hello, world!";
    s.erase(5,2);
    cout << s << endl;

    s.erase(5);
    cout << s << endl;
    
    s.erase();
    if(s.empty()) cout << "empty value" << endl;
    return 0;
}