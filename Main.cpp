#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
	char c;
again:cout<<"Please enter [c]hoose, [q]uit, [h]elp, [v]ersion:"
    cin>>c
    switch(c)
    {
        case 'c':
        case 'C':choose(); break;
        
        case 'q':
        case 'Q':exit(0); break;
        
        case 'h':
        case 'H':help(); break;
        
        case 'v':
        case 'V':version(); break;
        
        default: cout<<"This version does not support the command "<<c<<" !"<<endl;
                 goto again;
                 break;
     }
     
    