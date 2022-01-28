//Given a string of integers, our task is to form the biggest number out of those numbers in the string. 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string st;
   getline(cin,st);
   sort(st.begin(),st.end(),greater<int>());
   cout<<st;
   return 0;
}
