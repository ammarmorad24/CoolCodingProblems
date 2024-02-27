// inspired from the list of problems in Felix CP Book
// the link of the problem : https://vjudge.net/problem/UVA-11223

#include <iostream>
#include <map>
#include <string>
using namespace std;

// Define the original Morse code map
map<std::string, char> morseCode = {
        {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'},
        {"-..", 'D'}, {".", 'E'}, {"..-.", 'F'},
        {"--.", 'G'}, {"....", 'H'}, {"..", 'I'},
        {".---", 'J'}, {"-.-", 'K'}, {".-..", 'L'},
        {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
        {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'},
        {"...", 'S'}, {"-", 'T'}, {"..-", 'U'},
        {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'},
        {"-.--", 'Y'}, {"--..", 'Z'},
        {"-----", '0'}, {".----", '1'}, {"..---", '2'},
        {"...--", '3'}, {"....-", '4'}, {".....", '5'},
        {"-....", '6'}, {"--...", '7'}, {"---..", '8'},
        {"----.", '9'},
        {".-.-.-", '.'}, {"--..--", ','}, {"-.-.-.", ';'},
        {"..--..", '?'}, {"-...-", '='}, {".----.", '\''},
        {".-.-.", '+'}, {"-.-.--", '!'}, {"-....-", '-'},
        {"-..-.", '/'}, {"-.--.", '('}, {"-.--.-", ')'},
        {".-..-.", '"'}, {".--.-.", '@'}, {".-...", '&'},{".-.-.", '+'},
        {"...-..-", '$'}, {"..--.-", '_'},{"---...", ':'}
};

void solve() {
    static int k = 1;
    string s;
    getline(cin, s);
    string temp;
    cout << "Message #" << k << '\n';
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            temp.push_back(s[i]);
        } else {
            if (s[i-1] == ' '){
                cout << " ";
            }
            else {
                cout << morseCode[temp];
                temp = "";
            }


        }
    }
    if (!temp.empty()) cout << morseCode[temp] ;
    cout << '\n';
    k++;
}

int main() {

    int t; cin >> t;
    cin.ignore();

    while(t--){
        solve();
        if (t) cout << '\n';
    }


    return 0;
}
