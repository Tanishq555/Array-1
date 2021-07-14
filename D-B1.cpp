#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
int n;
cin>>n;
int array[n];
for (int i = 0; i <=n; i++)
{
   cin>>array[i];
}
int MAX=INT_MIN;
int MIN=INT_MAX;

for (int i = 0; i <n; i++)
{
    MAX=max(array[i],MAX);
    MIN=min(array[i],MIN);
   
   
    
} cout<<MAX<<" "<<MIN<<" ";


}