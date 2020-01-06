#include<iostream>
#include<string>
using namespace std;
int main()
{
    int h,s;
    string order;
    cin>>h>>s;
    cin>>order;
    for(int i = 0;i<order.size();i++)
    {
        if(order[i] == 'u' && s >0)
        {
            s-=1;
        }
        if(order[i]=='d' && s<h)
        {
            s+=1;
        }
    }
    cout<<s<<endl;
    system("pause");
    return 0;
}