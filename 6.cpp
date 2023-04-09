/*6. Write a program to find some key value pairs and print on the console. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(2,40));
    m.insert(make_pair(5,50));
    m.insert(make_pair(6,60));
    m.insert(make_pair(2,70));
    int key = 2;
    for(auto it = m.begin();it!=m.end();++it)
    if(it->first==key)
    cout<<it->first<<"  :  "<<it->second<<endl;
    cout<<endl;
    return 0;
}