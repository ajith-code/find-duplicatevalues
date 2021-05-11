#include <iostream>


using namespace std;


int main()

{

int a[]={10,5,3,4,5,6,7};

for(int i=0;i<=6;i++)

{

for(int j=i+1;j<=6;j++)

{

if(a[i]==a[j])

{
    
cout<<"DUPLICATE value is"<<a[i]<<"\n";

}

}

}
           

return 0;

}