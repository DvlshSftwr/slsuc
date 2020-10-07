#include "spd-def.h"


int main(int argCnt, char** argVec) {
	static int exitCode = A,
			   argIdx   = A,
			   count    = A;
	
	for (argIdx = B, count = B; argIdx < argCnt; argIdx++, count++) { 
		if (strcmp(argVec[argIdx], MPH_2_KPH) == A)
			fprintf(stdout, CNVR_RSLT, count, mphToKph(argVec[++argIdx]));
		
		else if (strcmp(argVec[argIdx], KPH_2_MPH) == A)
			fprintf(stdout, CNVR_RSLT, count, kphToMph(argVec[++argIdx]));
		
		else if (strcmp(argVec[argIdx], M2K) == A)
			fprintf(stdout, CNVR_RSLT, count, mileToKilometer(argVec[++argIdx]));
		
		else if (strcmp(argVec[argIdx], K2M) == A)
			fprintf(stdout, CNVR_RSLT, count, kilometerToMile(argVec[++argIdx]));
		
		else if (strcmp(argVec[argIdx], HELP) == A) {
			helpMenu();
			break;
		}
		else {
			badCommand(argVec[argIdx]);
			exitCode = C;
			break;
		}
	}
	
	return exitCode;
}


