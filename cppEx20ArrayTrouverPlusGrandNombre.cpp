#include <iostream>

using namespace std;

int main(){

 float suite[7];
 int i;

 for(i=0;i<7;++i){
 cout<<"entrer des entiers ou des nombres decimal: "<<endl;
 cin>>suite[i];

 if(suite[0]<suite[i])
    suite[0] = suite[i];

 }

cout<<suite[0]<<endl;

system("pause");
    
return 0;
}