/*1. Write a c++ program to demonstrate the implementation of multimap */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<char,int> mp;
    multimap<char,int>::iterator it;
    mp.insert(pair<char,int>('a',10));
    mp.insert(pair<char,int>('b',20));
    mp.insert(pair<char,int>('b',30));
    mp.insert(pair<char,int>('c',20)); 
    mp.insert(pair<char,int>('a',40));
    cout<<endl<<"the size of multimap is  :  "<<mp.size();
    cout<<endl<<"multimap contain some elements  :  "<<endl;
    for(it=mp.begin();it!=mp.end();++it)
    cout<<it->first<<"  ->  "<<it->second<<endl;
   
    for(char c = 'a';c <= 'c';c++)
    cout<<"there are "<<mp.count(c)<< " element with  key  "<<c<<endl;
    it = mp.find('b');
    mp.erase(it);
    cout<<endl<<"the size of multimap is  :  "<<mp.size();
    cout<<endl<<"multimap contain some elements  :  "<<endl;
     cout<<"second method print element "<<endl;
    for(it=mp.begin();it!=mp.end();++it)
    cout<<(*it).first<<"  ->  "<<(*it).second<<endl;
    cout<<endl;
    return 0;
}