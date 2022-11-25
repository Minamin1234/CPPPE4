#include <iostream>
#include <map>
#include <functional>

using namespace std;

class address
{
public:
    string name;
    string phone;

    bool operator<(const address& other) const{
        return name < other.name ||
        name == other.name && phone < other.phone;
    }
};

int main(){

    address a[3];
    map<string,address> m;
    return 0;
}