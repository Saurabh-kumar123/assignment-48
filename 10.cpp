//10.Write a program that checks whether a given multimap is empty or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m;
    cout<<"before insert element : "<<endl;
    if(m.empty())
    cout<<"empty : "<<endl;
    else
    cout<<"not empty : "<<endl;
    m.insert({2,30});
    m.insert({1,40});
    m.insert({3,60});
    m.insert({2,20});
    m.insert({5,50});
    cout<<endl<<"after insert element  : "<<endl;
    for(auto it : m)
    cout<<it.first<<"  :  "<<it.second<<endl;
    if(m.empty())
    cout<<"empty : "<<endl;
    else
    cout<<"not empty : "<<endl;
    cout<<endl;
    return 0;
}