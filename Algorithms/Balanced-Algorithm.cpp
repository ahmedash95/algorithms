// Example program for check brackets in the code
// inputs
//
// foo(bar); 
// output: success
//
// foo(bar();
// output: (
//
// {}({}; 
// output: (


#include <iostream>
#include <string>
#include<stack>

using namespace std;

bool arePair(char opening, char closing)
{
    if(opening == '(' && closing == ')') return true;
    else if(opening == '{' && closing == '}') return true;
    else if(opening == '[' && closing == ']') return true;
    return false;
}

bool isBalanced(string str)
{
    stack<char> S;
    long stringLength = str.length();
    for(int i = 0; i < stringLength; i++)
    {
        if(str[i] == '(' or str[i] == '{' or str[i] == '[')
        {
            S.push(str[i]);
            
        } else if (str[i] == ')' or str[i] == '}' or str[i] == ']'){
            if(S.empty() || !arePair(S.top(),str[i])){
                cout << i + 1 << "\n";
                return false;
            } else {
                S.pop();
            }
        }
    }
    if(!S.empty())
    {
        char inv = S.top();
        int errorIndex = -1;
        for(int i = 0; i < stringLength; i++){
            if(str[i] == inv && !arePair(str[i], str[i + 1])){
                errorIndex = i;
                cout << i + 1 << "\n";
                return false;
            }
        }
        
    }
    return S.empty();
}


int main()
{
    string line;
    getline( cin, line );
    if(line.length() == 1)
    {
        cout << 1 << "\n";
        return 0;
    }
    if(isBalanced(line)){
        cout << "Success" << "\n";
    }
}
