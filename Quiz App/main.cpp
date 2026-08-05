#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<string> questions;
vector<string> answers;

void add(string question, string answer)
{

    questions.push_back(question);
    answers.push_back(answer);
}

void play()
{

    string input = "y";
    int l = questions.size();
    int counter = 0;
    int correct = 0;
    int wrong = 0;

    while ((input != "x" || input != "Y") && counter < l)
    {

        cout << "Question " << counter << ": " << questions[counter] << " ";
        cin >> input;
        

        if (input == answers[counter])
        {

            cout << "Correct" << endl;
            correct++;
        }
        else
        {

            cout << "Wrong! " << answers[counter] << " is the correct answer" << endl;
            wrong++;
        }

        counter++;
    }

    cout << "Total attempted: " << counter << endl;
    cout << "Correct answers: " << correct << endl;
    cout << "Wrong anwers: " << wrong << endl;

    cout << endl;

    cout << "Game Over" << endl;

    cout << endl;
}


//Add your questions here
void defaultQuestions()
{

    add("2 + 2", "4");
    add("5 - 3", "2");
    add("Capital of Pakistan", "Islamabad");
    add("Square root of 16", "4");
}


//Main Function
int main()
{

    cout << "==================================================" << endl;
    cout << "                   Quiz App                       " << endl;
    cout << "==================================================" << endl;

    cout << "Enter 1 for Test and 0 for exit ";
    int num;
    cin >> num;

    if (num == 1)
    {
        defaultQuestions();
        play();
        return 0;
    }

    else
    {
        cout << "Program exited successfully" << endl;
        return 0;
    }
}