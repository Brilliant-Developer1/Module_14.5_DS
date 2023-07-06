// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int value)
    {
        v.push_back(value);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int input;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    myStack st1;
    int input1;
    cin >> input1;

    for (int i = 0; i < input1; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    // while (!st1.empty())
    // {
    //     cout << st1.top() << endl;
    //     st1.pop();
    // }
    bool flag = true;
    if (st.size() == st1.size())
    {
        while (!st.empty())
        {
            if (st.top() == st1.top())
            {
                st.pop();
                st1.pop();
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    else
    {
        flag = false;
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}