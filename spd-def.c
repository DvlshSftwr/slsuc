#include "spd-def.h"


float mileToKilometer(const char* mileStr) {
	float mile = strtof(mileStr, NULL);
	
	return (mile / C) + (mile / E); 
}


float kilometerToMile(const char* kilomStr) {
	float kilom = strtof(kilomStr, NULL);
	
	return (kilom - (kilom / F)) * C; 
}


float mphToKph(const char* mphStr) {
	float mph = strtof(mphStr, NULL);
	
	return (mph * KILOM);
}


float kphToMph(const char* kphStr) {
	float kph = strtof(kphStr, NULL);
	
	return (kph * MILE);
}


void helpMenu(void) {
	fprintf(stdout,
		"\n[{( Snow Lynx Speed Unit Converter )}]\n"
		"	a simple command line tool for converting popular units of\n"
		"	speed and distance ^,..,^\n\n"
		"===============================================================\n"
		"|1| Miles per hour to kilometers per hour | %s {mph} |\n"
		"===============================================================\n"
		"|2| Kilometers per hour to miles per hour | %s {kph} |\n"
		"===============================================================\n"
		"|3| Miles to kilometers                   | %s {kilometers} |\n"
		"===============================================================\n"
		"|4| Kilometers to miles                   | %s {miles}      |\n"
		"===============================================================\n"
		"|5| List commands for slsuc               | %s            |\n"
		"===============================================================\n\n",
	MPH_2_KPH, KPH_2_MPH, M2K, K2M, HELP);
}


void badCommand(const char* badCmd) {
	fprintf(stderr, 
		"[{( !! Error !! )}]\n"
		"    Invalid command : %s\n"
		"    Type %s for a list of possible operations\n\n",
	badCmd, HELP);
}

