/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

void agarradato(int &N);
void calculo(int a, int b, int c, int d);

int main()
{




	return 0;
}

void agarradato(int &N) {
	int N;

	do {
		cout<<"Coloque un número menor a 1000: ";
		cin >> N;
	} while (N < 1 && N >= 10000);


}

void calculo(int a, int b, int c, int d, int N, float division) {

	if (N > 1 && <10) {
		a = N%10;
	} else {
		    if (N >= 10 && N <=100) {
			    a = N%10;
                b = (N/10) % 10;
		    } else {
		            if( N >= 100 && N <1000) {
		                a = N%10;
                        b = (N/10) % 10;
                        c = (N/10) % 10;
		            } else {
		                     if( N >=1000 && N < 10000) {
		                        a = N%10;
                                b = (N/10) % 10;
                                c = (N/10) % 10;
		                        d = (N/10) % 10;
		                     }
		                }
		        }
	    }


	/* int t=0, ;

	for (int i=0 ; i<t ; i++) {


	    residuo = x%10
	    v = x/10;
	    t = t + 1;


	}*/


}