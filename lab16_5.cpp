#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); 
int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int x=*a,z=*c,v=*d;
	int n=rand()%4;
	switch (n){
		case 0 : 
		*a=*b;
		*b=x;
		break;
		case 1 :
		*c=v;
		*d=z;
		break;
		case 2 :
		*c=x;
		*a=z;
		break;
		case 3:
		*a=*b;
		*b=x;
		*c=v;
		*d=z;
		break;

	}
}
