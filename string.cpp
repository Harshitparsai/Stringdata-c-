
PRACTICE
COMPETE
JOBS
LEADERBOARD

Search
harshitparsai3
PracticeC++StringsStrings
50 more points to get your next star!
Learn more
CPP
38% 100/150
Your Strings submission got 10.00 points.  
You are now 50 points away from the 4th star for your c++ badge.
Try the Next Challenge | Try a Random Challenge
×
Strings
by abhiranjan
Problem
Submissions
Leaderboard
Discussions
C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:

Declaration:

string a = "abc";
Size:

int len = a.size();
Concatenate two strings:

string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
Accessing  element:

string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
P.S.: We will use cin/cout to read/write a string.

Input Format

You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively. 
In the second line print the string produced by concatenating  and  (). 
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af
Explanation

 "abcd"
 "ef"
 "abcdef"
 "ebcd"
 "af"
Easy
Submitted 57404 times
Max Score 10
Need Help?

View Discussions
View Top Submissions
RATE THIS CHALLENGE

Download problem statement
Download sample test cases
Suggest Edits
 

 
1
#include <iostream>
2
#include <string>
3
using namespace std;
4
​
5
int main() {
6
   // Complete the program
7
    string str,str1;
8
    char ch;
9
    cin>>str;
10
    cin>>str1;
11
    cout<<str.size()<<" "<<str1.size()<<"\n";
12
    cout<<str+str1<<"\n";
13
    ch=str[0];
14
    str[0]=str1[0];

15
    str1[0]=ch;
16
    cout<<str<<" "<<str1;
17
  
18
    return 0;
19
}
20
​
