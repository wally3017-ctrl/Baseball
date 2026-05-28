#include <string>
#include <stdexcept>
using namespace std;
using std::string;

class Baseball {
public:
    void guess(const string& input) {
        throw length_error("Must be 3 characters");
    };
};