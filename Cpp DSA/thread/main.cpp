#include<iostream>
#include<pthread.h>
#include<cstdlib>
using namespace std;
int n;
void* factorial(void*)
{
  int i,fact=1;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  cout<<"\nFactorial of " <<n<<" is: "<<fact<<endl;
  pthread_exit(NULL);
}
void* cube(void*)
{
  int c;
  c=n*n*n;
  cout<<"\nCUBE OF "<<n<<" IS: "<<c<<endl;
  pthread_exit(NULL);
}
int main(int argc,char *argv[])
{
  pthread_t tid1;
  pthread_t tid2;
  pthread_attr_t attr1;
  pthread_attr_t attr2;
  cin>>n;
  pthread_attr_init(&attr1);
  cout<<"\nThread 1 FACTORIAL";
  pthread_attr_init(&attr2);
  cout<<"\nThread 2 CUBE";
  pthread_create(&tid1,&attr1,factorial,(void*)&n);
  pthread_join(tid1,NULL);
  pthread_create(&tid2,&attr2,cube,(void*)&n);
  pthread_join(tid2,NULL);
  return 0;
}
