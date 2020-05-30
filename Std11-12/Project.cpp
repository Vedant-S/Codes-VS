#include<iostream>
#include<stack>
#include<string>

using namespace std;
class infixpostfix
{

	public:
	// Function to evaluate Postfix expression and return output
	string InfixToPostfix(string expression)
	{
		
		stack<char> S;
		string postfix = ""; 
		for(int i = 0;i< expression.length();i++) 
		{

			// Scanning each character from left to right. 
			// If character is a delimitter, move on. 
			if(expression[i] == ' ' || expression[i] == ',') continue; 

	
			else if(IsOperator(expression[i])) 
			{
				while(!S.empty() && S.top() != '(' && HasHigherPrecedence(S.top(),expression[i]))
				{
					postfix=postfix+ S.top();
					S.pop();
				}
				S.push(expression[i]);
			}
			
			else if(IsOperand(expression[i]))
			{
				postfix =postfix+expression[i];
			}	

			else if (expression[i] == '(') 
			{
				S.push(expression[i]);
			}

			else if(expression[i] == ')') 
			{
				while(!S.empty() && S.top() !=  '(')
				{
					postfix =postfix+ S.top();
					S.pop();
				}
				S.pop();
			}
		}

		while(!S.empty()) 
		{
			postfix =postfix+ S.top();
			S.pop();
		}

		return postfix;
	}


	// Function to verify whether an operator has higher precedence over other

	bool HasHigherPrecedence(char op1, char op2)
	{
		int op1Weight = GetOperatorWeight(op1);
		int op2Weight = GetOperatorWeight(op2); 
		if(op1Weight>op2Weight || op1Weight==op2Weight)
			return true;
		else 
			false;
	}
	// Function to get weight of an operator. An operator with higher weight will have higher precedence. 
	int GetOperatorWeight(char op)
	{	
		int weight = -1; 
		switch(op)
		{
		case '+':
		case '-':
			weight = 1;break;
		case '*':
		case '/':
			weight = 2;break;
		}
		return weight;
	}

	// Function to verify whether a character is operator symbol or not. 
	bool IsOperator(char C)
	{
		if(C == '+' || C == '-' || C == '*' || C == '/')
			return true;

		return false;
	}
	// Function to verify whether a character is alphanumeric chanaracter (letter or numeric digit) or not. 
	bool IsOperand(char C) 
	{
		if(C >= '0' && C <= '9') return true;
		if(C >= 'a' && C <= 'z') return true;
		if(C >= 'A' && C <= 'Z') return true;
		return false;
	}
};
int main() 
{
	infixpostfix obj;
	string expression; 
	cout<<endl<<"     PROGRAM TO CONVERT INFIX TO POSTFIX";
	cout<<endl<<"* * * * * * * * * * * * * * * * * * * * * * * ";
	cout<<endl<<endl;
	cout<<"  Enter  Infix   Expression : ";
	getline(cin,expression);
	cout<<"\n";
	string postfix = obj.InfixToPostfix(expression);
	cout<<"  The Postfix Expression is : "<<postfix<<endl<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * *  "<<endl;
	return 0;
}

