#include <bits/stdc++.h>

using namespace std;

int MinRotation(int a , int b){
    int difference = abs(b - a);
    int test1 = (difference + 26) % 26;     //clockwise test
    int test2 = 26 - ((difference + 26) % (26));    //counterclockwise test 
    int result3 = min(test1,test2);     //taking the minimum
    return result3;

}

int main() {
    //the string input
    string name;
    cin >> name;

    int n = name.length();      // size of the string
    int rotations;
    int a1 = name[0];           //calculating the ascii of the first letter

    rotations = MinRotation(a1,97);     //calculating the first rotation from 'a' to the first letter in the string

    for (int i = 0; i < n - 1; i++) {
        int a = name[i];
        int b = name[i+1];
        rotations += MinRotation(a,b);
    }

    cout << rotations;
    return 0;
}