#include <iostream>
#include <algorithm>
using namespace std;

int getTriangleArea(int x[],int y[],int n, int m)
{
    int breadth,height;
    int flag=0;
    if(count(x,x+n,x[0])==2)
    {
        flag=1;
        if(count(x,x+n,x[1])==2)
        {
            breadth=abs(y[0]-y[1]);
            height=abs(x[0]-x[2]);
        }
        else
        {
            breadth=abs(y[0]-y[2]);
            height=abs(x[0]-x[1]);
        }
    }
    else if(count(x,x+n,x[2])==2)
    {
        flag=1;
        breadth=abs(y[1]-y[2]);
        height=abs(x[1]-x[0]);
    }
    
    if(flag==0)
    {
        if(count(y,y+n,y[0])==2)
        {
            if(count(y,y+n,y[1])==2)
            {
                breadth=abs(x[0]-x[1]);
                height=abs(y[0]-y[2]);
            }
            else
            {
                breadth=abs(x[0]-x[2]);
                height=abs(y[0]-y[1]);
            }
        }
        else 
        {
            breadth=abs(x[1]-x[2]);
            height=abs(y[1]-y[0]);
        }
    }
    
    int area=(breadth*height)/2;
    return area;
}

int main()
{
    int xsize,ysize;
    cout<<"Enter the size of x coordinate: ";
    cin>>xsize;
    int x[xsize];
    cout<<"Enter the x-coordinates: ";
    for(int i=0;i<xsize;i++)
    {
        cin>>x[i];
    }
    
    cout<<"Enter the size of y coordinate: ";
    cin>>ysize;
    int y[ysize];
    cout<<"Enter the x-coordinates: ";
    for(int i=0;i<ysize;i++)
    {
        cin>>y[i];
    }
    
    cout<<getTriangleArea(x,y,xsize,ysize);
    return 0;
}
