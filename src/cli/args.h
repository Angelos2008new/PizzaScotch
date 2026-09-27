#ifndef _BS_ARGS_H_
#define _BS_ARGS_H_

#include "platformdefs.h"
#include "runner.h"

bool parseOsTypeArg(const char* s, YoYoOperatingSystem* out);
void printOsTypeNames(FILE* out);
void printUsage(const char* argv0);
void parseCommandLineArgs(CommandLineArgs* args, int argc, char* argv[]);

#endif /* _BS_ARGS_H_ */