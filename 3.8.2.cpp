#include<iostream>
#include<string>
using namespace std;
int main()
{
int n=9;
int a[n];
string result_str,str;
cout<<"Enter strings(Ctrl+z to end):"<<endl;
cin>>result_str;
while(cin>>str)
result_str=result_str+' '+str;
cout<<"String equal to the concatenation of these strings is:"
<<endl<<result_str<<endl;
return 0;
}
