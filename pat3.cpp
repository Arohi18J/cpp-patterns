#include<bits/stdc++.h>
using namespace std;
int main()
{   int row,col,rows=6;
    char alpha='A';
    
    for(row=1;row<=rows;row++)
   
    {    
        alpha='A';
            for(col=1;col<=row;++col)
            {   
                cout<<"\t"<<alpha;
                alpha++;
            }
             cout<<"\n ";
    }
   
}