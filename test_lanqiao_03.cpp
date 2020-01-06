#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int brand[11];
    memset(brand,0,sizeof(brand));
    string votes[1010];
    int count = 0;
    for(int i =1;i<=n;i++)
    {
        cin>>votes[i];
    }
    while(1)
    {
        for(int i =1;i<=m;i++)
        {
            if(brand[i]!=-1) brand[i] =0;
        }
        for(int i =1;i<=n;i++)
        {
            int k = 0;
            while(brand[votes[i][k]-'0']== -1 &&votes[i][k]-'0'!=0)
            {
                k++;
            }
            if(votes[i][k]-'0'==0)
            {
                continue;
            }else{
                brand[votes[i][k]-'0']++;
            }
        }
        int min = 10010;
        int max = 0;
        for(int i = 1;i<=m;i++)
        {
            if(brand[i] == -1)
            {
                count++;
                continue;
            }
            if(min>brand[i])
            {
                min = brand[i];
            }
            if(max<brand[i])
            {
                max = brand[i];
            }
        }
        if(max>min && m-count>=2)
        {
            for(int i = 1;i<=m;i++)
            {
                if(brand[i] == min)
                    brand[i] = -1;
            }
        }else if(max == min && m-count<2){
             for(int i = 1;i<=m;i++)
                if(brand[i]!=-1)
                {
                    cout<<i<<endl;
                    return 0;
                }
        }else{
            cout<<0-max<<endl;
            return 0;
        }
    }
    return 0;
}