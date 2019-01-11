#include<iostream>

using namespace std;

int main()
{
    float answer=0,x=0,y=2 ;

    while(y<=69)
    {
        x = 1/y;
        y++;
        answer += x; 
        cout<<answer<<endl;
    }
    return 0;
}

