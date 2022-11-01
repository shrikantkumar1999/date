#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
 

using namespace std;
int main(){
    int h=0,m=0,s=0;
    cin>>h>>m>>s;
while(1){
    system("color 04"); 
if(s>=59){s=0;m++;}
if(m>59){m=0;h++;}
Sleep(1000);
s++;
system("cls");
cout<<h<<" "<<m<<" "<<s<<"\n";

}



    return 0;
}