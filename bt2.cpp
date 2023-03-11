
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   if (n>= 0) {
   	if (n == 0) {
   		int S = 0;
   		cout<<"0 = "<<S;
	   }
	 else {
	   	int dem =0;
	   	int tam = n;
	  	 while (tam>0){
	  	 	dem++;
	   		tam = tam/10;
	 	  }
	   	
	   	int c = 0;
	     while (n>0) {
	   		int t = n%10;
	   		c = c*10+t;
			n=n/10; 			
		}
	   	int S = 1;
  	     while (c>0) {	  		
   			int a;
   			a = c%10;
   			S *= a;
   		    c = c/10;
   		    cout<<a;  		    
    	    dem--;
   	    if(dem > 0) {
		   cout<<"*";
		}
	 }
	   cout<<"="<<S;
  }
   	
   }   
    else {
   	cout<<"N";
   }	
	return 0;
}

