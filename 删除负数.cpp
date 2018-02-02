#include<iostream> 
using namespace std; 
void input(int *a,int n)
{
    for(int i=0;i<n;i++)
    cin>>a[i];
}
int find_elem(int a[],int n) 
{
	int i; 
    for(i=0;i<n && a[i]>=0;i++);
    if(i<n) 
    return i;
    else
    return -1;
}
void delete_elem(int a[],int &n,int x)
{
	for(int i=x;i<n-1;i++)
	a[i]=a[i+1];
	n--;
}
void output(int a[],int n) 
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl; 
}
int main() 
{
    int *p,n,k;
	cout<<"请输入个数：\n";
	cin>>n;
    p=new int [n]; 
    cout<<"请输入一组数据：\n";
    input(p,n);
    while((k=find_elem(p,n))>=0) 
    delete_elem(p,n,k);
    output(p,n);
    delete [] p;
    return 0; 
}
