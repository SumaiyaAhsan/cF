#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<string>v;
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        v.push_back(word);
    }
    for(int i=0;i<v.size();i++)
    {
        bool duplicate=false;
        for(int j=0;j<v.size();j++)
        {
            if( i!=j && v[i]==v[j])
            {
              bool duplicate=true;
              break;
            }
          
        }
    }
    bool duplicate;
    if(duplicate){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes";
    }
    return 0;
}