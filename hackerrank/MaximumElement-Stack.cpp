/**
Ahmed Ash

github.com/ahmedash95 | @ahmedash95

https://www.hackerrank.com/challenges/maximum-element
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

class StackWithMax{
    struct node{
        int value;
        int maxValue;
    };
    
    stack<node> st;
    
public:
    void pop(){
        st.pop();
    }
    void push(const int &val){
        node newNode;
        newNode.value = val;
        newNode.maxValue = (st.empty() == true ? val : max (st.top().maxValue,val));
        st.push(newNode);
    }
    int getMaxValue(){
        return st.empty() ? false : st.top().maxValue;
    }
};

int main() {
    int n;
    StackWithMax st;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int type,value;
        cin >> type;
        if(type == 1){
            cin >> value;
            st.push(value);
        } else if (type == 2){
            st.pop();
        } else if( type == 3){
            int maxValue = st.getMaxValue();
            if(maxValue != false)
                cout << maxValue << endl;
        }
    }
    
    return 0;
}
