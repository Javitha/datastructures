#include <iostream>
#include<string>
#include<cstring>
#include <stack>
#include<algorithm>
using namespace std;

int main() {

// Postfix expression: 1 2 3 * + 4 -

char ch;
string postfix;
getline (cin,postfix);

int l=postfix.length();
cout<<postfix<<l;

stack<int> s;

for(int i = 0; i < l; i++)
{

ch = postfix[i];

if (isdigit(ch)) 
{ s.push(ch-'0');
}

else 
{

int op1 = s.top(); s.pop();

int op2 = s.top(); s.pop();

switch(ch) 
{

case '*': s.push(op2 * op1); break;

case '/': s.push(op2 / op1); break;

case '+': s.push(op2 + op1); break;

case '-': s.push(op2 - op1); break;

}

}

}

cout << "\nEvaluation: " << s.top();

return 0;

}
