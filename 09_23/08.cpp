#include <iostream>
#include <vector>
#include <limits>
#include <stdexcept>

using namespace std;

//(8) (7)で作成したプログラムから"try{}"を削除し、さらに、catchからreturnの直前までを削除せよ。
//(tryの中身を残す事に気をつけよ)

unsigned int sum(const vector<unsigned int>& v)
{
    unsigned int result = 0;
    for(size_t i = 0;i < v.size();i++)
    {
        if(v.at(i) > numeric_limits<int>::max() - result)
        {
            throw overflow_error("sum is overflow");
        }
        result += v.at(i);
    }
    return result;
}

int main()
{
    vector<unsigned int> v;
    v.push_back(numeric_limits<int>::max());
    v.push_back(numeric_limits<int>::max());

    unsigned int result = sum(v);
    cout << "sum is " << result << endl;
    
    return 0;
}
/*
terminate called after throwing an instance of 'std::overflow_error'
  what():  sum is overflow
zsh: abort      ./a.out
*/