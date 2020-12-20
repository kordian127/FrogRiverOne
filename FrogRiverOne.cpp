#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
int A[]={1,3,1,4,2,3,2,4,5};
int x=5;
int * indx;
vector<int> vec;

for(int i=1; i<=x;i++){
    indx = find(A,A+sizeof(A)/sizeof(A[0]),i);
    vec.push_back(distance(A,indx));
}
sort(vec.begin(),vec.end());
cout<< "time: " << vec.back() <<endl;
return 0;
}
