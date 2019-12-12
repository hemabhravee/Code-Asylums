#include <bits/stdc++.h>

using namespace std;

char A[3] = {'(','[','{'};
char B[3] = {')',']','}'};
stack<char> s;


//returns true if balanced
string isBalanced(string str){
    for(int i=0; i<str.length(); i++){
        //cout<<str[i];
        //if stack is empty, cant have a closing bracket
        if(s.empty()){
            for(int j=0;j<3;j++){
                if(str[i]==B[j])
                    return "NO";
            }
            //not a closing bracket
            s.push(str[i]);
        }
        //if stack is not null
        else{
            char y = s.top();
            for(int j=0;j<3;j++){
                //if opening and closing bracket match
                if(str[i] == B[j] && y == A[j]){
                    s.pop();
                    //after popping, if we reach end of string, and stack is empty => the brackets were balanced
                    if(i == str.length()-1 && s.empty())
                        return "YES";
                    //otherwise, go to next loop
                    goto next;
                }
                //if a closing bracket doesn't match with it's opening counterpart, return false
                else if(str[i] == B[j] && y != A[j])
                    return "NO";
            }
            //if opening and closing brackets dont match, just push
            s.push(str[i]);
        }
        //after pushing, if we reach end of string, brackets are not balanced
        if(i == str.length()-1)
                        return "NO";
        next:
            continue;
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
