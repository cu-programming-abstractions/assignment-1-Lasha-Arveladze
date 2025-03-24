/* File: OnlyConnect.cpp
 *
 * TODO: Edit these comments to describe anything interesting or noteworthy in your implementation.
 *
 * TODO: Edit these comments to leave a puzzle for your section leader to solve!
 */
#include "OnlyConnect.h"
using namespace std;

string onlyConnectize(string phrase) {
    if (phrase.empty()) return "";

    char firstChar = toupper(phrase[0]);
    string rest = onlyConnectize(phrase.substr(1));

    if (isalpha(firstChar) && !(firstChar == 'A' || firstChar == 'E' || firstChar == 'I' || firstChar == 'O' || firstChar == 'U')) {
        return firstChar + rest;
    } else {
        return rest;
    }
}






/* * * * * * Provided Test Cases * * * * * */
#include "GUI/SimpleTest.h"

PROVIDED_TEST("Handles single-character inputs.") {
    EXPECT_EQUAL(onlyConnectize("A"), "");
    EXPECT_EQUAL(onlyConnectize("Q"), "Q");
}

PROVIDED_TEST("Converts lower-case to upper-case.") {
    EXPECT_EQUAL(onlyConnectize("lowercase"), "LWRCS");
    EXPECT_EQUAL(onlyConnectize("uppercase"), "PPRCS");
}

PROVIDED_TEST("Hangles the numbers"){
    EXPECT_EQUAL(onlyConnectize("323223."), "");
    EXPECT_EQUAL(onlyConnectize("9123102"), "");
}

PROVIDED_TEST("Handles the symbols") {
    EXPECT_EQUAL(onlyConnectize("{}|><"), "");
    EXPECT_EQUAL(onlyConnectize("++++"), "");
}



/* TODO: You will need to add your own tests into this suite of test cases. Think about the sorts
 * of inputs we tested here, and, importantly, what sorts of inputs we *didn't* test here. Some
 * general rules of testing:
 *
 *    1. Try extreme cases. What are some very large cases to check? What are some very small cases?
 *
 *    2. Be diverse. There are a lot of possible inputs out there. Make sure you have tests that account
 *       for cases that aren't just variations of one another.
 *
 *    3. Be sneaky. Don't just try standard inputs. Try weird ones that you wouldn't expect anyone to
 *       actually enter, but which are still perfectly legal.
 *
 * Happy testing!
 */






