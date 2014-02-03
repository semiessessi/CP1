#ifndef SWITCHES_H
#define SWITCHES_H

struct Switches
{
    int errorVerbosity;
    int infoVerbosity;
    int optimisationLevel;
	const char* includePath;
};

extern Switches gxSwitches;

#endif
