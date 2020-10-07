#ifndef SPD_DEF_H

#define SPD_DEF_H

#define	MPH_2_KPH "--mph-2-kph"
#define	KPH_2_MPH "--kph-2-mph"
#define	M2K		  "-m2k"
#define	K2M		  "-k2m"
#define	HELP	  "--help"
#define	CNVR_RSLT "Conversion Result %d : %.2f\n\n"

#define	KILOM	  1.609344f
#define	MILE	  0.6214f

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum IntegerIndex {
	A, // 0
	B, // 1
	C, // 2
	D, // 3
	E, // 4
	F, // 5
};

float mileToKilometer(const char* mileStr);

float kilometerToMile(const char* kilomStr);

float mphToKph(const char* mphStr);

float kphToMph(const char* kphStr);

void  helpMenu(void);

void  badCommand(const char* badCmd);

#endif
