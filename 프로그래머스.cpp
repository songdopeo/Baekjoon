#include <string>
#include <vector>
#include <iostream>

using namespace std;


#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    int len = new_id.length();
    int i = 0;
    //step 1
    for (int i = 0; i < new_id.length(); i++)
    {
        new_id[i] = tolower(new_id[i]);
    }

    //step 2 !,@,#,* Á¦°Å
    for (int i = 0; i < new_id.length(); i++) {
        if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9') || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
            answer.push_back(new_id[i]);
    }

    //step 3 
    for (int i = 1; i < answer.length(); i++)
    {
        if (answer[i] == '.' && answer[i - 1] == '.')
        {
            answer.erase(answer.begin() + i);
            continue;
        }
        else i++;
    }

    //step4 
    if (answer[0] == '.') answer.erase(answer.begin());
    if (answer[answer.length() - 1] == '.') answer.erase(answer.end() - 1);

    //step5
    if (answer.length() == 0)
        answer.push_back('a');

    //step 6
    if (answer.length() >= 16)
    {
            answer.erase(answer.begin() + 15, answer.end());
            if (answer[answer.length() - 1] == '.')
                answer.erase(answer.end() - 1);

   

    }

    //step 7
    if(answer.length() <= 2) {
        while (new_id.length() != 3)
        {
            new_id += new_id.back();
        }

    }
  
    return answer;
}

int main()
{

    cout << solution("...!@BaT# * ..y.abcdefghijklm") << endl;
    cout << solution("z-+.^.") << endl;
    cout << solution("=.=") << endl;
    cout << solution("123_.def") << endl;
}