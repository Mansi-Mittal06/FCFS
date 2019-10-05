#include<iostream>
int main()
{
  int i,j,k,l,n,m,a[10],b[10],c[10],t[10],w[10];
  std::cout<<"enter no. of process \n";
  std::cin>>n;
  for(i=0;i<n;i++)
  {
  std::cout<<"p"<<i+1<<":";
  std::cin>>a[i];
  std::cin>>b[i];
  }
  c[0]=a[0]+b[0];
  for(i=0;i<n;i++)
  {
  for(j=1;j<n;j++)
  c[j]=c[j-1]+b[j];
  for(k=0;k<n;k++)
  t[k]=c[k]-a[k];
  for(l=0;l<n;l++)
  w[l]=t[l]-b[l];
  }
  std::cout<<"process\tarrival time\tburst time\tcomplete time\tturn around time\twaiting time \n";
  for(i=0;i<n;i++)
  {
  std::cout<<"p"<<i+1<<"\t\t"<<a[i]<<"\t\t"<<b[i]<<"\t\t"<<c[i]<<"\t\t"<<t[i]<<"\t\t"<<w[i]<<"\n";
  }
  return 0;
  }
