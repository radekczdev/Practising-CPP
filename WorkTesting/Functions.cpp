#include <string>
#include <vector>

using namespace std;

static const vector<string> memberTypes = { "ASM_MEM", "PRT_MEM" };

static bool checkIfItemIsAMember(const string &inventorType) {
	return find(memberTypes.begin(), memberTypes.end(), inventorType) != memberTypes.end();
}