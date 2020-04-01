#include <iostream>
#include <sstream>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

string getCurrentTime() {
	time_t clock = time(nullptr);
	tm time = {};
	localtime_s(&time, &clock);
	stringstream sout;
	sout << dec << setw(2) << setfill(' ') << time.tm_hour << ":"
		<< dec << setw(2) << setfill('0') << time.tm_min << ":"
		<< dec << setw(2) << setfill('0') << time.tm_sec;
	return sout.str();
}