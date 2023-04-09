//7. Write a program to find a lower bound. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(5,30));
    m.insert(make_pair(4,40));
    
    auto it = m.lower_bound(2);
    cout<<(*it).first<<"  :  "<<(*it).second<<endl;
    cout<<endl;

    it = m.lower_bound(3);
    cout<<(*it).first<<"  :  "<<(*it).second<<endl;
    cout<<endl;

     it = m.lower_bound(6);
    cout<<(*it).first<<"  :  "<<(*it).second<<endl;
    cout<<endl;
    return 0;
}