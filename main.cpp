#include "etime.h"

using namespace std;

int frequency_of_primes (int n) {
	int i,j;
	int freq=n-1;
	for (i=2; i<=n; ++i) {
		for (j=sqrt(i);j>1;--j) {
			if (i%j==0) {
				--freq;
				break;
			}
		}
	}
	return freq;
}


int main(){
	
	etime e;
	e.start();
	
	int N = 3000000;
	
	int f = frequency_of_primes(N);
	
	printf ("The number of primes lower than %d is: %d\n",N,f);
	
//	e.end("Elapsed time: ");
	
//	OR:
	cout << "Elapsed time: " << e.end() << " seconds.\n";
		
}
