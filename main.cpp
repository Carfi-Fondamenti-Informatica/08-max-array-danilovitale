#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
    int n=0; 
    float h=0;
    cin>>n;
    float max[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>h;
        max[i]=h;
    }
    
    cout<<massimo(max, n);
}
