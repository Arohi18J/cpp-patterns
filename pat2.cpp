#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,rows=4;
    
    for(row=1;row<=rows;row++)
    {
            for(col=1;col<=row;col++)
            {
                cout<<"\t*";
            }
            cout<<"\n ";
    }
}