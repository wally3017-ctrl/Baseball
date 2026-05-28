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
            if (ch >= '0' && ch <= '9') continue;
            throw invalid_argument("Must be a number");
        }

        if (isDuplecateNumber(guessNumber)) {
            throw invalid_argument("Must not have same number");
        }
    }
private:
    bool isDuplecateNumber(const string& guessNumber) {
        for (int i = 0; i < guessNumber.length(); i++) {
            for (int j = i + 1; j < guessNumber.length(); j++) {
                if (guessNumber[i] == guessNumber[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};