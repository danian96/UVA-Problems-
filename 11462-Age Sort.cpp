#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            int v[a];
            for(int i=0;i<a;i++)
            {
                cin>>v[i];
            }
            sort(v,v+a);
            for(int i=0;i<a;i++)
            {
                cout<<v[i];
                if(i<(a-1))
                {
                    cout<<" ";
                }
            }
            cout<<endl;

        }
    }
    return 0;
}
