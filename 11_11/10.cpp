#include <iostream>

using namespace std;

string getdomain(const string& addr){
    string res = "";
    bool frag = false;
    for(auto c : addr){
        if(c == '@'){
            frag = true;
            continue;
        }
        if(frag){
            res += c;
        }
    }
    return res;
}

int main()
{
    cout << getdomain("sample@example.com") << endl;

    cout << getdomain("a-b.cdef@foo-bar.bas.jp") << endl;
    return 0;
}