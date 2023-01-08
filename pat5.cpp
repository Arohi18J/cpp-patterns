#include<bits/stdc++.h>
using namespace std;
int main()
{   int row,col,rows=6;
    
    
    for(row=1;row<=rows;row++)
   
    {    
        
            for(col=1;col<=rows-row+1;++col)
            {   
                cout<<"\t*";
                
            }
             cout<<"\n ";
    }
   
}