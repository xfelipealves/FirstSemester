#include <iostream>
#include <cmath>
using namespace std;

int a,b,c,d,m,n,f,g;

int main() 
{
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    f=c+d;
    g=a+b;
    
    m=a%2;
    
    if (b>c && d>a && f>g && c>0 && d>0 && m==0)
    {cout<<"Valores aceitos"<<endl;
    }
    else
    {cout<<"Valores nao aceitos"<<endl;
    }
    
    
    return 0;
}
