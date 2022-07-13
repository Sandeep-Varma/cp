#include <iostream>
#include <cmath>
#include <set>
using namespace std;

bool isPrime(int n, set<int> primes){
	for (auto x:primes) if (n % x == 0) return false;
	return true;
}

int main(){
	long long int N;
	cin>>N;
	int n = cbrt(N/2);
	set<int> primes = {2};
	for (int i=3; i<=n; i+=2){
		if (isPrime(i, primes)) primes.insert(i);
	}
	int z = 0;
	auto it_end = primes.end();
	for (auto x=primes.begin(); x!=it_end; x++){
		for (auto y=next(x); y!=it_end; y++){
			if ((long long int)*x**y**y**y <= N) z++;
			else{
				it_end = y;
				break;
			}
		}
	}
	cout<<z<<endl;
}