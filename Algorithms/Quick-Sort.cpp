#include<iostream>
#include<algorithm>
#include <cstring>
#include <vector>
#include <iterator>
#include <cmath>
#include <sstream>

using namespace std;

void sortArray(int *a,int left,int right){
 
    int i = left;
    int j = right;
    
    int tmp;
    
    int pivot = a[(left+right)/2];
    
    while ( i <= j )
    {
        while( a[i] < pivot )
            i++;
        while( a[j] > pivot)
            j--;
        
        if(i <= j){
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }
    
    if(left < j)
        sortArray(a, left, j);
    if(i < right)
        sortArray(a, i, right);
}


int main()
{
    int n;
    
    cin >> n;
    
    int a[n];
    
    for(int i = 0; i < n; i++)
        cin >> a[i];

    
    sortArray(a, 0, n - 1);
    
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    
    return 0;
}
