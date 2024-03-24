#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    int cnt1,cnt2 ;
    cin>>a;
    cin>>b;
    
    int len=a.size();
    for( int k=0;k<len;k++){
        cnt1++;
    }
    
    int len1=b.size();
    for( int l=0;l<len1;l++){
        cnt2++;
    }
    
    cout<<cnt1<<" "<<cnt2<<endl;
    cout<<a+b<<endl;
    
    a[0] ^= b[0];
    b[0] ^= a[0];
    a[0] ^= b[0];
    
    cout<<a<<" "<<b;    
    return 0;
}
