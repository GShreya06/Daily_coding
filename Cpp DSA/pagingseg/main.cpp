# include <iostream>
#include <random>
using namespace std;
void allocation(int f[], int pid,int fno, int n){
    for(int k=0; k<fno ; k++){
        int r=(rand()%n);
        if(f[r]==0){
            f[r]=pid;
        }
        else{
            fno++;
        }
    }
}
void deallocation(int f[]){
    int d;
    cout<<"Enter the pid of process u want to Deallocate ";
    cin>>d;
    for(int i=0;i<d; i++){
        if(f[i]==d){
           f[i]=0;
         }
     }
}
int main(){
    int page_size,mem_size,pno;
    cout<<"Enter the page size : ";
    cin>>page_size;
    cout<<"Enter the Memory size : ";
    cin>>mem_size;
    int n = mem_size/page_size;
    int f[n];
    for(int i=0; i<n; i++){
        f[i]=0;
    }
    for(int i=0; i<n; i++){
       cout<< f[i]<<'\t';
    }
    cout<<endl;
    cout<<"How many process: ";
    cin>>pno;
    int pid[pno],p_size[pno],frame_no[pno];
    for(int i=0; i<pno; i++){
    cout<<"Enter the process id  : ";
    cin>>pid[i];
    cout<<"Enter the process size : ";
    cin>>p_size[i];
    frame_no[i]=p_size[i]/page_size;
    allocation(f, pid[i],frame_no[i],n);
    cout<<"Frame no"<<'\t'<<"Process allocated"<<endl;
    for(int j=0; j<n; j++){
        cout<<j<<" "<<f[j]<<endl;
        }
    }
    deallocation(f);
    cout<<"Frame no"<<'\t'<<"Process deallocated"<<endl;
    for(int j=0; j<n; j++){
        cout<<j<<" "<<f[j]<<endl;
        }
    return 0;
}
