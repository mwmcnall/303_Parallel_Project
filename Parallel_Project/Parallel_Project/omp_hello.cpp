#include <omp.h> 
#include <stdio.h>
#include <stdlib.h> 
#include <iostream>

using namespace std;

const int NUM_THREADS = 8;

int main (int argc, char *argv[]) {  
	int nthreads, tid;
	// Fork a team of threads giving them their own copies of variables
	omp_set_num_threads(NUM_THREADS);
	printf("Current number of threads: %d\n\n", NUM_THREADS);
#pragma omp parallel private(nthreads, tid)
{	
	tid = omp_get_thread_num();
	printf("Hello World from thread = %d\n", tid);
	// Only master thread does this 
	if (tid == 0) {    
		nthreads = omp_get_num_threads();
		//nthreads = omp_get_num_threads();
		printf("Number of threads = %d\n", nthreads);
	}
}// All threads join master thread and disband 

	return 0;
}


// Source code to reference from videos if necessary
/*
using namespace std;
static long num_steps = 10000;
double step;
static const int NUM_THREADS = 2;
int main() {

	int i, nthreads;
	double pi = 0.0;

	step = 1.0 / static_cast<double>(num_steps);
	omp_set_num_threads(NUM_THREADS);

#pragma omp parallel
	{
		int i, nthrds;
		const int id = omp_get_thread_num();
		double x, sum=0.0;
		nthrds = omp_get_num_threads();
		if (id == 0)
			nthreads = nthrds;
		for (i = id; i < num_steps; i = i + nthrds) {
			x = (i + 0.5) * step;
			sum += 4.0 / (1.0 + (x * x));
		}
#pragma omp critical
		pi += sum * step;
	}
	return 0;

*/