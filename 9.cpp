/*9. You are given an array A of size N. You need to insert the elements of 
A into a multimap(element as key and index as value) and display the results. Also,
 you need to erase a given element x from the multimap and print "erased x" if successfully 
 erased, else print "not found".*/
 #include<bits/stdc++.h>
 using namespace std;
 multimap<int,int> multimapinsert(int ar[],int n)
 {
    multimap<int,int> m;
    for(int i=0;i<n;i++)
    m.insert({ar[i],i});
    return m;
 }
 void multimapdisplay(multimap<int,int> m)
 {
        for(auto &it : m)
        cout<<it.first<<"  :  "<<it.second<<endl;
 }
 void multimaperase(multimap<int,int> &m,int n)
 {
    if(m.count(n))
    {
        cout<<"erase ";
        m.erase(n);
    }
    else
    cout<<endl<<"not found";
 }
 int main()
 {
    int ar[]={1,2,3,54,5,6,76,8,78,79};
    int n = sizeof(ar)/sizeof(ar[0]);
    multimap<int,int> m = multimapinsert(ar,n);
    multimapdisplay(m);
    multimaperase(m,76);
    multimapdisplay(m);
    return 0;
 }