// http://codeforces.com/problemset/problem/721/A

#include<iostream>
#include<algorithm>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char word[n];
    for(int i = 0; i < n; i++)
    {
        cin >> word[i];
    }
    
    
    vector<int> m;
    
    int cm = 0;
    for(int i = 0; i < n; i++)
    {
        if(word[i] == 'B' && word[i - 1] == 'B'){
            m[cm] += 1;
            if(word[i + 1] == 'W')
            {
                cm++;
            }
        } else if(word[i] == 'B'){
            m.push_back(1);
            if(word[i + 1] == 'W')
            {
                cm++;
            }
        }
        
    }
    
    cout << m.size();
    
    if(m.size() != 0)
        cout << "\n";
        
    for(int i = 0; i < m.size(); i++)
    {
        cout << m[i] << " ";
    }
    cout << "\n";
    return 0;
}
