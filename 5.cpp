/*5. Write a program to erase only a single value based on position*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m;
    m.insert({1,10});
    m.insert({2,20});
    m.insert({3,30});
    m.insert({4,40});
    m.insert({5,50});
    m.insert({6,60});
    multimap<int,int>::iterator it;
    cout<<endl<<"multimap element before using erase : "<<endl;
    for( it = m.begin();it!=m.end();++it)
    cout<<it->first<<"  :  "<<it->second<<endl;
    auto itr1 = m.begin();
    auto itr2 = m.end();
    itr1++;
    itr1++;
    itr1++;
    itr2--;
    itr2--;
    m.erase(itr1,itr2);
    cout<<endl<<"after erase call : "<<endl;
    for( it=m.begin();it!=m.end();++it)
    cout<<it->first<<"  :  "<<it->second<<endl;
    cout<<endl;
    return 0;
}