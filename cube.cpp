//give an positive integer N , and  N=X^3-Y^3 , calculate X Y
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int input;
    while(cin>>input)
    {
        if(input==0) return 0;
        int x,y,i,j,flag=0;
        for(i=1;i<sqrt(input);i++)
        {
            x=i*i*i;
            for(j=1;j<i;j++)
            {
                y=j*j*j;
                if((x-y)==input) {flag=1;break;}
            }
            if(flag==1) break;
        }
        if(flag==1) cout<<i<<" "<<j<<endl;
        else cout<<"No solution"<<endl;

    }
}
