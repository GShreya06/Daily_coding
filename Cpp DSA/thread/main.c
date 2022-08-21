#include <iostream>
#include <pthread.h>
using namespace std;
int num;
void* factorial(void*)
{
int fac=1;
for(int i=1;i<=num;i++)
{
fac=fac*i;
}
cout<<"Factorial of the number is "<<fac;
pthread_exit(NULL);
}
int main()
{
pthread_t t;
cout<<"Enter the Number ";
cin>>num;
pthread_create(&t,NULL,factorial,(void*)&num);
pthread_join(t,NULL);
return 0;
