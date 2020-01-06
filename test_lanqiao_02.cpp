#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int fish,delivery;
    int t_f,t_d;
    for(int i = 1;i<=n;i++)
    {
        cin>>fish>>delivery;
        if(i == 1)
        {
            ans+=fish;
            t_f = fish;
            t_d=delivery;
        }else{
            if(fish>t_f+t_d)
            {
                ans+=t_f+t_d;
                t_d+=delivery;
            }  
            else
            {
                ans+=fish;
                t_f = fish;
                t_d = delivery;
            }
        }
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}