/*4. Write a program to erase all the entries of the key. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m;
    m.insert({2,30});
    m.insert({1,40});
    m.insert({3,60});
    m.insert({2,20});
    m.insert({5,50});
    cout<<endl<<"multimap element before using erase : "<<endl;
    for(auto it : m)
    cout<<it.first<<"  :  "<<it.second<<endl;
    m.erase(1);
    m.erase(2);
    cout<<endl<<"after erase call : "<<endl;
    for(auto it : m)
    cout<<it.first<<"  :  "<<it.second<<endl;
    cout<<endl;
    return 0;
}