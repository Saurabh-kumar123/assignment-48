/*2. Declare a multimap m1 of key-value pairs of integer type and then insert some pair type data. 
Now print the multimap values of m1, and also create another multimap m2 of the same type as m1 
using m1.begin() and m1.end() as parameters. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m1;
   //ultimap<int,int>::iterator it;
    m1.insert(pair<int,int>(1,20));
    m1.insert(pair<int,int>(2,30));
    m1.insert(pair<int,int>(3,40));
    m1.insert(pair<int,int>(1,22));
    cout<<"multimap m1 element : "<<endl<<endl;

    for(auto itr : m1)
    cout<<itr.first<<"  :  "<<itr.second<<endl;

    multimap<int,int> m2(m1.begin(),m1.end());
    cout<<endl<<"multimap m2 element : "<<endl<<endl;
    for(pair<int,int> it : m2)
    cout<<it.first<<"  :  "<<it.second<<endl;
    cout<<endl;
    return 0;
}