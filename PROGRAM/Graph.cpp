#include<iostream>
using namespace std;
int ary[10][10],completed[10],n,cost=0;

void takeInput()
 {
	int i,j;
	 cout<<"Masukkan Jumlah Kota : ";
	cin>>n;
	 cout<<"\nNilai Cost Matrix\n";
	for(i=0;i < n;i++)
	  {
	  cout<<"\nCost Element Baris ke-: "<<i+1<<"\n";
	  for( j=0;j < n;j++)
	  cin>>ary[i][j];
	  completed[i]=0;
	  }
	  cout<<"\n\nCost List :";
	  for( i=0;i < n;i++)
	  {
	      cout<<"\n";
	      for(j=0;j < n;j++)
	      cout<<"\t"<<ary[i][j];
	  }
	}

	int least(int c)
	{
	  int i,nc=999;
	  int min=999,kmin;
	  for(i=0;i < n;i++)
    {
	  if((ary[c][i]!=0)&&(completed[i]==0))
	  if(ary[c][i]+ary[i][c] < min)
    {
        min=ary[i][0]+ary[c][i];
        kmin=ary[c][i];
        nc=i;
    }
  }

    if(min!=999)
    cost+=kmin;
    return nc;
}

void mincost(int city)
 {
    int i,ncity;
    completed[city]=1;
    cout<<city+1<<"--->";
    ncity=least(city);
    if(ncity==999)

    {
        ncity=0;
        cout<<ncity+1;
        cost+=ary[city][ncity];
      return;
    }
    mincost(ncity);
}
int main()
{
    takeInput();
    cout<<"\n\nJalur Terpendek :\n";
    mincost(0); //passing 0 because star ting vertex
cout<<"\n\nMinimum Cost : "<<cost<<endl;
return 0;
}

