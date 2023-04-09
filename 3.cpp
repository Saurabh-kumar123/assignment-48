/*3. Write a c++ code for illustration of multimap::swap() function. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m1,m2;
   //ultimap<int,int>::iterator it;
    m1.insert(pair<int,int>(1,20));
    m1.insert(pair<int,int>(2,30));
    m2.insert(pair<int,int>(3,40));
    m2.insert(pair<int,int>(1,22));
    cout<<"multimap m1 element : "<<endl<<endl;

    for(auto itr : m1)
    cout<<itr.first<<"  :  "<<itr.second<<endl;
    cout<<endl<<"multimap m2 element : "<<endl<<endl;

    for(pair<int,int> it : m2)
    cout<<it.first<<"  :  "<<it.second<<endl;
    // swap element ....
    m1.swap(m2);

     cout<<"multimap m1 element : "<<endl<<endl;

    for(auto itr : m1)
    cout<<itr.first<<"  :  "<<itr.second<<endl;
     cout<<endl<<"multimap m2 element : "<<endl<<endl;

    for(pair<int,int> it : m2)
    cout<<it.first<<"  :  "<<it.second<<endl;
    cout<<endl;
    return 0;
}