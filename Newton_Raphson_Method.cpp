#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;
double func(double x)
{
    return pow(x,2)-(3*x)+2;
}
double derivFunc(double x)
{
    return 2*x - 3;
}
double x0,x1,a;
int s,t,c;
void NRE()
{
   cin>>x0; double h = func(x0) / derivFunc(x0);
    while(true){
         h = func(x0)/derivFunc(x0);
        x1 = x0 - h;
        if(a==x1)
            break;
        a=x1;
         cout << "The value of the root is : " << x1<<endl;
         x0=x1;
}
    cout << "The value of the root is : " << x1<<endl;
}
void NRS()
{
   cin>>x0>>s; double h = func(x0) / derivFunc(x0);t=0;
    while (t<s)
    {
        h = func(x0)/derivFunc(x0);
        x1 = x0 - h;t++;
         cout << "Step: " <<t<<" "<< x1<<endl;
         x0=x1;
    }
    cout << "The value of the root is : " << x1<<endl;
}
int main()
{
    while(1){
            cout<<"1. Steps"<<endl<<"2. Error"<<endl;
     cin>>c;
    if(c==1)NRS();
    if(c==2)NRE();
}
return 0;
}
