/**
Ahmed Ash

github.com/ahmedash95 | @ahmedash95

https://www.hackerrank.com/challenges/balanced-brackets
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;


class Balance{
  
    struct bracket{
      char openTag;
      char closeingTag;
    };
    
    stack<bracket> st;
    
public:
    void add(char o){
      bracket newBracket;
        if(o == '('){
            newBracket.openTag = '(';
            newBracket.closeingTag = ')';
        } else if(o == '{') {
            newBracket.openTag = '{';
            newBracket.closeingTag = '}';
        } else if(o == '[') {
            newBracket.openTag = '[';
            newBracket.closeingTag = ']';
        }
        st.push(newBracket);
    }
    bracket top(){
        return st.top();
    }
    void pop(){
        return st.pop();
    }
    bool empty(){
        return st.empty();
    }
    bool takeWithCheckBalance(string line){
        for(int i = 0; i < line.length(); i++)
        {
            char o = line[i];
            if(o == '(' or o == '{' or o == '[')
            {
                add(o);    
            } else {
                if((o == ')' or o == '}' or o == ']') && !empty()){
                    if(top().closeingTag == o){
                        pop();
                        continue;
                    } else {
                        return false;
                    }
                }
                return false;
            }
        }
        return empty();
    }
};


int main()
{
    string line;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        Balance b;
        cin >> line;
        if(b.takeWithCheckBalance(line)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
}
