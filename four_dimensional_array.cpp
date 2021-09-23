#include<iostream>
using namespace std;

class Four_Dimensional
{
    int ****p;
    int i,j,k,l;
    public:
    Four_Dimensional(int first,int second,int third,int fourth)
    {
        p=NULL;
        i=0;
        j=0;
        k=0;
        l=0;

        p=new int***;
        for(int i=0;i<first;i++)
        {
            p[i]=new int**[first];
        }
        for(int i=0;i<first;i++)
        {
            for(int j=0;j<second;j++)
            {
                p[i][j]=new int*[second];
            }
        }
        for(int i=0;i<third;i++)
        {
            for(int j=0;j<third;j++)
            {
                for(int k=0;k<fourth;k++)
                {
                    p[i][j][k]=new int[third];
                }
            }
        }
    }
    void Get_Input(int first,int second,int third,int fourth)
    {
        cout<<"Enter the elements:";

        for(int i=0;i<first;i++)
        {
            for(int j=0;j<second;j++)
            {
                for(int k=0;k<third;k++)
                {
                    for(int l=0;l<fourth;l++)
                    {
                        cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"["<<l<<"]"<<":";
                        cin>>p[i][j][k][l];
                    }
                    
                }
            }
            
        }
    }
    void Display(int first,int second,int third,int fourth)
    {
        cout<<"Elements are:";

        for(int i=0;i<first;i++)
        {
            for(int j=0;j<second;j++)
            {
                for(int k=0;k<third;k++)
                {
                    for(int l=0;l<fourth;l++)
                    {
                        cout<<p[i][j][k][l]<<"\t";
                    }
                 cout<<"\n"; 
                }
                
            }
            
        }
    }
};
int main()
{
    int first=0,second=0,third=0,fourth=0;
    cout<<"\nEnter the dimensions:";
    cin>>first;
    cin>>second;
    cin>>third;
    cin>>fourth;

    Four_Dimensional fobj(first,second,third,fourth);
    fobj.Get_Input(first,second,third,fourth);
    fobj.Display(first,second,third,fourth);
    return 0;
}
