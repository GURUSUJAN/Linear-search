#include"iostream"
using namespace std;
int main()
{
    int n,i,k;
    cin>>n>>k;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(k==ar[i])
        {
            cout<<"position: "<<i<<endl;
        }
        else
        {
            cout<<"Not Found"<<endl;
        }
    }
}
