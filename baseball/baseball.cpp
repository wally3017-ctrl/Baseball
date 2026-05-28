#include <string>
#include <stdexcept>
using namespace std;
using std::string;

class Baseball {
public:
    void guess(const string& guessNumber) {
        if (guessNumber.length() != 3) {
            throw length_error("Must be 3 characters");
        }

        for (char ch : guessNumber) {
            if (ch < '0' || ch > '9') {
                throw length_error("Must be a number");
            }
        }
    }
};