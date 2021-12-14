#include<stdio.h>
#include<iostream>
#include<string>
#include<stdio.h>
#include<fstream>
using namespace std;
const int START = 0;
const int MYERROR = 65537;

string analysis(string yytext)
{
	int state = START;
	int i = 0;
	char ch = yytext[i];
	while (i <= yytext.length())
	{
		switch (state)
		{
		case 0:
		{
			if (ch == '!')
			{
				state = 42;
				break;
			}
			if (ch == '"')
			{
				state = 98;
				break;
			}
			if (ch == '%')
			{
				state = 43;
				break;
			}
			if (ch == '&')
			{
				state = 44;
				break;
			}
			if (ch == '\'')
			{
				state = 99;
					break;
			}
			if (ch == '(')
			{
				state = 1;
					break;
			}
			if (ch == ')')
			{
				state = 2;
				break;
			}
			if (ch == '*')
			{
				state = 45;
				break;
			}
			if (ch == '+')
			{
				state = 46;
				break;
			}
			if (ch == ',')
			{
				state = 3;
				break;
			}
			if (ch == '-')
			{
				state = 4;
				break;
			}
			if (ch == '.')
			{
				state = 47;
				break;
			}
			if (ch == '/')
			{
				state = 48;
				break;
			}
			if (ch == '0')
			{
				state = 111;
				break;
			}
			if (ch == '1')
			{
				state = 94;
				break;
			}
			if (ch == '2')
			{
				state = 94;
				break;
			}
			if (ch == '3')
			{
				state = 94;
				break;
			}
			if (ch == '4')
			{
				state = 94;
				break;
			}
			if (ch == '5')
			{
				state = 94;
				break;
			}
			if (ch == '6')
			{
				state = 94;
				break;
			}
			if (ch == '7')
			{
				state = 94;
				break;
			}
			if (ch == '8')
			{
				state = 94;
				break;
			}
			if (ch == '9')
			{
				state = 94;
				break;
			}
			if (ch == ':')
			{
				state = 5;
				break;
			}
			if (ch == ';')
			{
				state = 49;
				break;
			}
			if (ch == '<')
			{
				state = 50;
				break;
			}
			if (ch == '=')
			{
				state = 51;
				break;
			}
			if (ch == '>')
			{
				state = 52;
				break;
			}
			if (ch == '?')
			{
				state = 53;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 87;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '[')
			{
				state = 82;
				break;
			}
			if (ch == '\\')
			{
				state = 90;
					break;
			}
			if (ch == ']')
			{
				state = 38;
					break;
			}
			if (ch == '^')
			{
				state = 83;
				break;
			}
			if (ch == '_')
			{
				state = 192;
				break;
			}
			if (ch == '`')
			{
				state = 90;
				break;
			}
			if (ch == 'a')
			{
				state = 244;
				break;
			}
			if (ch == 'b')
			{
				state = 197;
				break;
			}
			if (ch == 'c')
			{
				state = 203;
				break;
			}
			if (ch == 'd')
			{
				state = 182;
				break;
			}
			if (ch == 'e')
			{
				state = 207;
				break;
			}
			if (ch == 'f')
			{
				state = 204;
				break;
			}
			if (ch == 'g')
			{
				state = 229;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 146;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 187;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 238;
				break;
			}
			if (ch == 's')
			{
				state = 177;
				break;
			}
			if (ch == 't')
			{
				state = 258;
				break;
			}
			if (ch == 'u')
			{
				state = 190;
				break;
			}
			if (ch == 'v')
			{
				state = 184;
				break;
			}
			if (ch == 'w')
			{
				state = 165;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			if (ch == '{')
			{
				state = 39;
				break;
			}
			if (ch == '|')
			{
				state = 84;
				break;
			}
			if (ch == '}')
			{
				state = 40;
				break;
			}
			if (ch == '~')
			{
				state = 41;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 1:
		{
			if (i == yytext.length())
			{
				printf("(");
				return"(";
			}
			return "MYERROR";
		}
		case 2:
		{
			if (i == yytext.length())
			{
				printf(")");
				return")";
			}
			return "MYERROR";
		}
		case 3:
		{
			if (i == yytext.length())
			{
				printf(",");
				return",";
			}
			return "MYERROR";
		}
		case 4:
		{
			if (i == yytext.length())
			{
				printf("-");
				return"-";
			}
			if (ch == '-')
			{
				state = 61;
				break;
			}
			if (ch == '=')
			{
				state = 79;
				break;
			}
			if (ch == '>')
			{
				state = 23;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 5:
		{
			if (i == yytext.length())
			{
				printf(":");
				return":";
			}
			if (ch == '>')
			{
				state = 38;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 6:
		{
			if (i == yytext.length())
			{
				printf("ADD_ASSIGN");
				return"ADD_ASSIGN";
			}
			return "MYERROR";
		}
		case 7:
		{
			if (i == yytext.length())
			{
				printf("AND_OP");
				return"AND_OP";
			}
			return "MYERROR";
		}
		case 8:
		{
			if (i == yytext.length())
			{
				printf("CASE");
				return"CASE";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 9:
		{
			if (i == yytext.length())
			{
				printf("CONST");
				return"CONST";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 10:
		{
			if (i == yytext.length())
			{
				printf("ELLIPSIS");
				return"ELLIPSIS";
			}
			return "MYERROR";
		}
		case 11:
		{
			if (i == yytext.length())
			{
				printf("ELSE");
				return"ELSE";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 12:
		{
			if (i == yytext.length())
			{
				printf("EXTERN");
				return"EXTERN";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 13:
		{
			if (i == yytext.length())
			{
				printf("FLOAT");
				return"FLOAT";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 14:
		{
			if (i == yytext.length())
			{
				printf("GOTO");
				return"GOTO";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 15:
		{
			if (i == yytext.length())
			{
				printf("INLINE");
				return"INLINE";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 16:
		{
			if (i == yytext.length())
			{
				printf("INT");
				return"INT";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 17:
		{
			if (i == yytext.length())
			{
				printf("LEFT_OP");
				return"LEFT_OP";
			}
			if (ch == '=')
			{
				state = 73;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 18:
		{
			if (i == yytext.length())
			{
				printf("LONG");
				return"LONG";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 19:
		{
			if (i == yytext.length())
			{
				printf("MUL_ASSIGN");
				return"MUL_ASSIGN";
			}
			return "MYERROR";
		}
		case 20:
		{
			if (i == yytext.length())
			{
				printf("NE_OP");
				return"NE_OP";
			}
			return "MYERROR";
		}
		case 21:
		{
			if (i == yytext.length())
			{
				printf("OR_ASSIGN");
				return"OR_ASSIGN";
			}
			return "MYERROR";
		}
		case 22:
		{
			if (i == yytext.length())
			{
				printf("OR_OP");
				return"OR_OP";
			}
			return "MYERROR";
		}
		case 23:
		{
			if (i == yytext.length())
			{
				printf("PTR_OP");
				return"PTR_OP";
			}
			return "MYERROR";
		}
		case 24:
		{
			if (i == yytext.length())
			{
				printf("RESTRICT");
				return"RESTRICT";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 25:
		{
			if (i == yytext.length())
			{
				printf("RETURN");
				return"RETURN";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 26:
		{
			if (i == yytext.length())
			{
				printf("RIGHT_ASSIGN");
				return"RIGHT_ASSIGN";
			}
			return "MYERROR";
		}
		case 27:
		{
			if (i == yytext.length())
			{
				printf("RIGHT_OP");
				return"RIGHT_OP";
			}
			if (ch == '=')
			{
				state = 26;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 28:
		{
			if (i == yytext.length())
			{
				printf("SHORT");
				return"SHORT";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 29:
		{
			if (i == yytext.length())
			{
				printf("SIZEOF");
				return"SIZEOF";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 30:
		{
			if (i == yytext.length())
			{
				printf("STRING_LITERAL");
				return"STRING_LITERAL";
			}
			return "MYERROR";
		}
		case 31:
		{
			if (i == yytext.length())
			{
				printf("STRUCT");
				return"STRUCT";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 32:
		{
			if (i == yytext.length())
			{
				printf("SWITCH");
				return"SWITCH";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 33:
		{
			if (i == yytext.length())
			{
				printf("TYPEDEF");
				return"TYPEDEF";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 34:
		{
			if (i == yytext.length())
			{
				printf("UNION");
				return"UNION";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 35:
		{
			if (i == yytext.length())
			{
				printf("VOID");
				return"VOID";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 36:
		{
			if (i == yytext.length())
			{
				printf("VOLATILE");
				return"VOLATILE";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 37:
		{
			if (i == yytext.length())
			{
				printf("WHILE");
				return"WHILE";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 38:
		{
			if (i == yytext.length())
			{
				printf("]");
				return"]";
			}
			return "MYERROR";
		}
		case 39:
		{
			if (i == yytext.length())
			{
				printf("{");
				return"{";
			}
			return "MYERROR";
		}
		case 40:
		{
			if (i == yytext.length())
			{
				printf("}");
				return"}";
			}
			return "MYERROR";
		}
		case 41:
		{
			if (i == yytext.length())
			{
				printf("~");
				return"~";
			}
			return "MYERROR";
		}
		case 42:
		{
			if (i == yytext.length())
			{
				printf("!");
				return"!";
			}
			if (ch == '=')
			{
				state = 20;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 43:
		{
			if (i == yytext.length())
			{
				printf("%");
				return"%";
			}
			if (ch == '=')
			{
				state = 75;
				break;
			}
			if (ch == '>')
			{
				state = 40;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 44:
		{
			if (i == yytext.length())
			{
				printf("&");
				return"&";
			}
			if (ch == '&')
			{
				state = 7;
				break;
			}
			if (ch == '=')
			{
				state = 54;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 45:
		{
			if (i == yytext.length())
			{
				printf("*");
				return"*";
			}
			if (ch == '=')
			{
				state = 19;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 46:
		{
			if (i == yytext.length())
			{
				printf("+");
				return"+";
			}
			if (ch == '+')
			{
				state = 72;
				break;
			}
			if (ch == '=')
			{
				state = 6;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 47:
		{
			if (i == yytext.length())
			{
				printf(".");
				return".";
			}
			if (ch == '.')
			{
				state = 100;
				break;
			}
			if (ch == '0')
			{
				state = 96;
				break;
			}
			if (ch == '1')
			{
				state = 96;
				break;
			}
			if (ch == '2')
			{
				state = 96;
				break;
			}
			if (ch == '3')
			{
				state = 96;
				break;
			}
			if (ch == '4')
			{
				state = 96;
				break;
			}
			if (ch == '5')
			{
				state = 96;
				break;
			}
			if (ch == '6')
			{
				state = 96;
				break;
			}
			if (ch == '7')
			{
				state = 96;
				break;
			}
			if (ch == '8')
			{
				state = 96;
				break;
			}
			if (ch == '9')
			{
				state = 96;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 48:
		{
			if (i == yytext.length())
			{
				printf("/");
				return"/";
			}
			if (ch == '=')
			{
				state = 63;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 49:
		{
			if (i == yytext.length())
			{
				printf(";");
				return";";
			}
			return "MYERROR";
		}
		case 50:
		{
			if (i == yytext.length())
			{
				printf("<");
				return"<";
			}
			if (ch == '%')
			{
				state = 39;
				break;
			}
			if (ch == ':')
			{
				state = 82;
				break;
			}
			if (ch == '<')
			{
				state = 17;
				break;
			}
			if (ch == '=')
			{
				state = 74;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 51:
		{
			if (i == yytext.length())
			{
				printf("=");
				return"=";
			}
			if (ch == '=')
			{
				state = 67;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 52:
		{
			if (i == yytext.length())
			{
				printf(">");
				return">";
			}
			if (ch == '=')
			{
				state = 69;
				break;
			}
			if (ch == '>')
			{
				state = 27;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 53:
		{
			if (i == yytext.length())
			{
				printf("?");
				return"?";
			}
			return "MYERROR";
		}
		case 54:
		{
			if (i == yytext.length())
			{
				printf("AND_ASSIGN");
				return"AND_ASSIGN";
			}
			return "MYERROR";
		}
		case 55:
		{
			if (i == yytext.length())
			{
				printf("AUTO");
				return"AUTO";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 56:
		{
			if (i == yytext.length())
			{
				printf("BOOL");
				return"BOOL";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 57:
		{
			if (i == yytext.length())
			{
				printf("BREAK");
				return"BREAK";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 58:
		{
			if (i == yytext.length())
			{
				printf("CHAR");
				return"CHAR";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 59:
		{
			if (i == yytext.length())
			{
				printf("COMPLEX");
				return"COMPLEX";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 60:
		{
			if (i == yytext.length())
			{
				printf("CONTINUE");
				return"CONTINUE";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 61:
		{
			if (i == yytext.length())
			{
				printf("DEC_OP");
				return"DEC_OP";
			}
			return "MYERROR";
		}
		case 62:
		{
			if (i == yytext.length())
			{
				printf("DEFAULT");
				return"DEFAULT";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 63:
		{
			if (i == yytext.length())
			{
				printf("DIV_ASSIGN");
				return"DIV_ASSIGN";
			}
			return "MYERROR";
		}
		case 64:
		{
			if (i == yytext.length())
			{
				printf("DO");
				return"DO";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 162;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 65:
		{
			if (i == yytext.length())
			{
				printf("DOUBLE");
				return"DOUBLE";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 66:
		{
			if (i == yytext.length())
			{
				printf("ENUM");
				return"ENUM";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 67:
		{
			if (i == yytext.length())
			{
				printf("EQ_OP");
				return"EQ_OP";
			}
			return "MYERROR";
		}
		case 68:
		{
			if (i == yytext.length())
			{
				printf("FOR");
				return"FOR";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 69:
		{
			if (i == yytext.length())
			{
				printf("GE_OP");
				return"GE_OP";
			}
			return "MYERROR";
		}
		case 70:
		{
			if (i == yytext.length())
			{
				printf("IF");
				return"IF";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 71:
		{
			if (i == yytext.length())
			{
				printf("IMAGINARY");
				return"IMAGINARY";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 72:
		{
			if (i == yytext.length())
			{
				printf("INC_OP");
				return"INC_OP";
			}
			return "MYERROR";
		}
		case 73:
		{
			if (i == yytext.length())
			{
				printf("LEFT_ASSIGN");
				return"LEFT_ASSIGN";
			}
			return "MYERROR";
		}
		case 74:
		{
			if (i == yytext.length())
			{
				printf("LE_OP");
				return"LE_OP";
			}
			return "MYERROR";
		}
		case 75:
		{
			if (i == yytext.length())
			{
				printf("MOD_ASSIGN");
				return"MOD_ASSIGN";
			}
			return "MYERROR";
		}
		case 76:
		{
			if (i == yytext.length())
			{
				printf("REGISTER");
				return"REGISTER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 77:
		{
			if (i == yytext.length())
			{
				printf("SIGNED");
				return"SIGNED";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 78:
		{
			if (i == yytext.length())
			{
				printf("STATIC");
				return"STATIC";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 79:
		{
			if (i == yytext.length())
			{
				printf("SUB_ASSIGN");
				return"SUB_ASSIGN";
			}
			return "MYERROR";
		}
		case 80:
		{
			if (i == yytext.length())
			{
				printf("UNSIGNED");
				return"UNSIGNED";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 81:
		{
			if (i == yytext.length())
			{
				printf("XOR_ASSIGN");
				return"XOR_ASSIGN";
			}
			return "MYERROR";
		}
		case 82:
		{
			if (i == yytext.length())
			{
				printf("[");
				return"[";
			}
			return "MYERROR";
		}
		case 83:
		{
			if (i == yytext.length())
			{
				printf("^");
				return"^";
			}
			if (ch == '=')
			{
				state = 81;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 84:
		{
			if (i == yytext.length())
			{
				printf("||");
				return"||";
			}
			if (ch == '=')
			{
				state = 21;
				break;
			}
			if (ch == '|')
			{
				state = 22;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 85:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == '.')
			{
				state = 138;
				break;
			}
			if (ch == '0')
			{
				state = 85;
				break;
			}
			if (ch == '1')
			{
				state = 85;
				break;
			}
			if (ch == '2')
			{
				state = 85;
				break;
			}
			if (ch == '3')
			{
				state = 85;
				break;
			}
			if (ch == '4')
			{
				state = 85;
				break;
			}
			if (ch == '5')
			{
				state = 85;
				break;
			}
			if (ch == '6')
			{
				state = 85;
				break;
			}
			if (ch == '7')
			{
				state = 85;
				break;
			}
			if (ch == '8')
			{
				state = 85;
				break;
			}
			if (ch == '9')
			{
				state = 85;
				break;
			}
			if (ch == 'A')
			{
				state = 85;
				break;
			}
			if (ch == 'B')
			{
				state = 85;
				break;
			}
			if (ch == 'C')
			{
				state = 85;
				break;
			}
			if (ch == 'D')
			{
				state = 85;
				break;
			}
			if (ch == 'E')
			{
				state = 85;
				break;
			}
			if (ch == 'F')
			{
				state = 85;
				break;
			}
			if (ch == 'L')
			{
				state = 109;
				break;
			}
			if (ch == 'P')
			{
				state = 104;
				break;
			}
			if (ch == 'U')
			{
				state = 107;
				break;
			}
			if (ch == 'a')
			{
				state = 85;
				break;
			}
			if (ch == 'b')
			{
				state = 85;
				break;
			}
			if (ch == 'c')
			{
				state = 85;
				break;
			}
			if (ch == 'd')
			{
				state = 85;
				break;
			}
			if (ch == 'e')
			{
				state = 85;
				break;
			}
			if (ch == 'f')
			{
				state = 85;
				break;
			}
			if (ch == 'l')
			{
				state = 124;
				break;
			}
			if (ch == 'p')
			{
				state = 104;
				break;
			}
			if (ch == 'u')
			{
				state = 107;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 86:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			return "MYERROR";
		}
		case 87:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '"')
			{
				state = 91;
				break;
			}
			if (ch == '\'')
			{
				state = 118;
					break;
			}
			if (ch == '0')
			{
				state = 266;
					break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 88:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			return "MYERROR";
		}
		case 89:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == '0')
			{
				state = 89;
				break;
			}
			if (ch == '1')
			{
				state = 89;
				break;
			}
			if (ch == '2')
			{
				state = 89;
				break;
			}
			if (ch == '3')
			{
				state = 89;
				break;
			}
			if (ch == '4')
			{
				state = 89;
				break;
			}
			if (ch == '5')
			{
				state = 89;
				break;
			}
			if (ch == '6')
			{
				state = 89;
				break;
			}
			if (ch == '7')
			{
				state = 89;
				break;
			}
			if (ch == '8')
			{
				state = 89;
				break;
			}
			if (ch == '9')
			{
				state = 89;
				break;
			}
			if (ch == 'F')
			{
				state = 88;
				break;
			}
			if (ch == 'L')
			{
				state = 88;
				break;
			}
			if (ch == 'f')
			{
				state = 88;
				break;
			}
			if (ch == 'l')
			{
				state = 88;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 90:
		{
			if (i == yytext.length())
			{
				printf("ERROR!");
				return"ERROR!";
			}
			return "MYERROR";
		}
		case 91:
		{
			if (ch == '!')
			{
				state = 91;
				break;
			}
			if (ch == '"')
			{
				state = 30;
				break;
			}
			if (ch == '%')
			{
				state = 91;
				break;
			}
			if (ch == '&')
			{
				state = 91;
				break;
			}
			if (ch == '\'')
			{
				state = 91;
					break;
			}
			if (ch == '+')
			{
				state = 91;
					break;
			}
			if (ch == ',')
			{
				state = 91;
				break;
			}
			if (ch == '-')
			{
				state = 91;
				break;
			}
			if (ch == '.')
			{
				state = 91;
				break;
			}
			if (ch == '/')
			{
				state = 91;
				break;
			}
			if (ch == '0')
			{
				state = 91;
				break;
			}
			if (ch == '1')
			{
				state = 91;
				break;
			}
			if (ch == '2')
			{
				state = 91;
				break;
			}
			if (ch == '3')
			{
				state = 91;
				break;
			}
			if (ch == '4')
			{
				state = 91;
				break;
			}
			if (ch == '5')
			{
				state = 91;
				break;
			}
			if (ch == '6')
			{
				state = 91;
				break;
			}
			if (ch == '7')
			{
				state = 91;
				break;
			}
			if (ch == '8')
			{
				state = 91;
				break;
			}
			if (ch == '9')
			{
				state = 91;
				break;
			}
			if (ch == ':')
			{
				state = 91;
				break;
			}
			if (ch == ';')
			{
				state = 91;
				break;
			}
			if (ch == '<')
			{
				state = 91;
				break;
			}
			if (ch == '=')
			{
				state = 91;
				break;
			}
			if (ch == '>')
			{
				state = 91;
				break;
			}
			if (ch == '?')
			{
				state = 91;
				break;
			}
			if (ch == 'A')
			{
				state = 91;
				break;
			}
			if (ch == 'B')
			{
				state = 91;
				break;
			}
			if (ch == 'C')
			{
				state = 91;
				break;
			}
			if (ch == 'D')
			{
				state = 91;
				break;
			}
			if (ch == 'E')
			{
				state = 91;
				break;
			}
			if (ch == 'F')
			{
				state = 91;
				break;
			}
			if (ch == 'G')
			{
				state = 91;
				break;
			}
			if (ch == 'H')
			{
				state = 91;
				break;
			}
			if (ch == 'I')
			{
				state = 91;
				break;
			}
			if (ch == 'J')
			{
				state = 91;
				break;
			}
			if (ch == 'K')
			{
				state = 91;
				break;
			}
			if (ch == 'L')
			{
				state = 91;
				break;
			}
			if (ch == 'M')
			{
				state = 91;
				break;
			}
			if (ch == 'N')
			{
				state = 91;
				break;
			}
			if (ch == 'O')
			{
				state = 91;
				break;
			}
			if (ch == 'P')
			{
				state = 91;
				break;
			}
			if (ch == 'Q')
			{
				state = 91;
				break;
			}
			if (ch == 'R')
			{
				state = 91;
				break;
			}
			if (ch == 'S')
			{
				state = 91;
				break;
			}
			if (ch == 'T')
			{
				state = 91;
				break;
			}
			if (ch == 'U')
			{
				state = 91;
				break;
			}
			if (ch == 'V')
			{
				state = 91;
				break;
			}
			if (ch == 'W')
			{
				state = 91;
				break;
			}
			if (ch == 'X')
			{
				state = 91;
				break;
			}
			if (ch == 'Y')
			{
				state = 91;
				break;
			}
			if (ch == 'Z')
			{
				state = 91;
				break;
			}
			if (ch == '[')
			{
				state = 91;
				break;
			}
			if (ch == '\\')
			{
				state = 106;
					break;
			}
			if (ch == ']')
			{
				state = 91;
					break;
			}
			if (ch == '^')
			{
				state = 91;
				break;
			}
			if (ch == '_')
			{
				state = 91;
				break;
			}
			if (ch == '`')
			{
				state = 91;
				break;
			}
			if (ch == 'a')
			{
				state = 91;
				break;
			}
			if (ch == 'b')
			{
				state = 91;
				break;
			}
			if (ch == 'c')
			{
				state = 91;
				break;
			}
			if (ch == 'd')
			{
				state = 91;
				break;
			}
			if (ch == 'e')
			{
				state = 91;
				break;
			}
			if (ch == 'f')
			{
				state = 91;
				break;
			}
			if (ch == 'g')
			{
				state = 91;
				break;
			}
			if (ch == 'h')
			{
				state = 91;
				break;
			}
			if (ch == 'i')
			{
				state = 91;
				break;
			}
			if (ch == 'j')
			{
				state = 91;
				break;
			}
			if (ch == 'k')
			{
				state = 91;
				break;
			}
			if (ch == 'l')
			{
				state = 91;
				break;
			}
			if (ch == 'm')
			{
				state = 91;
				break;
			}
			if (ch == 'n')
			{
				state = 91;
				break;
			}
			if (ch == 'o')
			{
				state = 91;
				break;
			}
			if (ch == 'p')
			{
				state = 91;
				break;
			}
			if (ch == 'q')
			{
				state = 91;
				break;
			}
			if (ch == 'r')
			{
				state = 91;
				break;
			}
			if (ch == 's')
			{
				state = 91;
				break;
			}
			if (ch == 't')
			{
				state = 91;
				break;
			}
			if (ch == 'u')
			{
				state = 91;
				break;
			}
			if (ch == 'v')
			{
				state = 91;
				break;
			}
			if (ch == 'w')
			{
				state = 91;
				break;
			}
			if (ch == 'x')
			{
				state = 91;
				break;
			}
			if (ch == 'y')
			{
				state = 91;
				break;
			}
			if (ch == 'z')
			{
				state = 91;
				break;
			}
			if (ch == '{')
			{
				state = 91;
				break;
			}
			if (ch == '}')
			{
				state = 91;
				break;
			}
			if (ch == '~')
			{
				state = 91;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 92:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == '0')
			{
				state = 92;
				break;
			}
			if (ch == '1')
			{
				state = 92;
				break;
			}
			if (ch == '2')
			{
				state = 92;
				break;
			}
			if (ch == '3')
			{
				state = 92;
				break;
			}
			if (ch == '4')
			{
				state = 92;
				break;
			}
			if (ch == '5')
			{
				state = 92;
				break;
			}
			if (ch == '6')
			{
				state = 92;
				break;
			}
			if (ch == '7')
			{
				state = 92;
				break;
			}
			if (ch == '8')
			{
				state = 92;
				break;
			}
			if (ch == '9')
			{
				state = 92;
				break;
			}
			if (ch == 'F')
			{
				state = 140;
				break;
			}
			if (ch == 'L')
			{
				state = 140;
				break;
			}
			if (ch == 'f')
			{
				state = 140;
				break;
			}
			if (ch == 'l')
			{
				state = 140;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 93:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == '0')
			{
				state = 96;
				break;
			}
			if (ch == '1')
			{
				state = 96;
				break;
			}
			if (ch == '2')
			{
				state = 96;
				break;
			}
			if (ch == '3')
			{
				state = 96;
				break;
			}
			if (ch == '4')
			{
				state = 96;
				break;
			}
			if (ch == '5')
			{
				state = 96;
				break;
			}
			if (ch == '6')
			{
				state = 96;
				break;
			}
			if (ch == '7')
			{
				state = 96;
				break;
			}
			if (ch == '8')
			{
				state = 96;
				break;
			}
			if (ch == '9')
			{
				state = 96;
				break;
			}
			if (ch == 'E')
			{
				state = 104;
				break;
			}
			if (ch == 'F')
			{
				state = 140;
				break;
			}
			if (ch == 'L')
			{
				state = 140;
				break;
			}
			if (ch == 'e')
			{
				state = 104;
				break;
			}
			if (ch == 'f')
			{
				state = 140;
				break;
			}
			if (ch == 'l')
			{
				state = 140;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 94:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == '.')
			{
				state = 93;
				break;
			}
			if (ch == '0')
			{
				state = 94;
				break;
			}
			if (ch == '1')
			{
				state = 94;
				break;
			}
			if (ch == '2')
			{
				state = 94;
				break;
			}
			if (ch == '3')
			{
				state = 94;
				break;
			}
			if (ch == '4')
			{
				state = 94;
				break;
			}
			if (ch == '5')
			{
				state = 94;
				break;
			}
			if (ch == '6')
			{
				state = 94;
				break;
			}
			if (ch == '7')
			{
				state = 94;
				break;
			}
			if (ch == '8')
			{
				state = 94;
				break;
			}
			if (ch == '9')
			{
				state = 94;
				break;
			}
			if (ch == 'E')
			{
				state = 104;
				break;
			}
			if (ch == 'L')
			{
				state = 127;
				break;
			}
			if (ch == 'U')
			{
				state = 125;
				break;
			}
			if (ch == 'e')
			{
				state = 104;
				break;
			}
			if (ch == 'l')
			{
				state = 143;
				break;
			}
			if (ch == 'u')
			{
				state = 125;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 95:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == '0')
			{
				state = 95;
				break;
			}
			if (ch == '1')
			{
				state = 95;
				break;
			}
			if (ch == '2')
			{
				state = 95;
				break;
			}
			if (ch == '3')
			{
				state = 95;
				break;
			}
			if (ch == '4')
			{
				state = 95;
				break;
			}
			if (ch == '5')
			{
				state = 95;
				break;
			}
			if (ch == '6')
			{
				state = 95;
				break;
			}
			if (ch == '7')
			{
				state = 95;
				break;
			}
			if (ch == '8')
			{
				state = 95;
				break;
			}
			if (ch == '9')
			{
				state = 95;
				break;
			}
			if (ch == 'F')
			{
				state = 86;
				break;
			}
			if (ch == 'L')
			{
				state = 86;
				break;
			}
			if (ch == 'f')
			{
				state = 86;
				break;
			}
			if (ch == 'l')
			{
				state = 86;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 96:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == '0')
			{
				state = 96;
				break;
			}
			if (ch == '1')
			{
				state = 96;
				break;
			}
			if (ch == '2')
			{
				state = 96;
				break;
			}
			if (ch == '3')
			{
				state = 96;
				break;
			}
			if (ch == '4')
			{
				state = 96;
				break;
			}
			if (ch == '5')
			{
				state = 96;
				break;
			}
			if (ch == '6')
			{
				state = 96;
				break;
			}
			if (ch == '7')
			{
				state = 96;
				break;
			}
			if (ch == '8')
			{
				state = 96;
				break;
			}
			if (ch == '9')
			{
				state = 96;
				break;
			}
			if (ch == 'E')
			{
				state = 105;
				break;
			}
			if (ch == 'F')
			{
				state = 86;
				break;
			}
			if (ch == 'L')
			{
				state = 86;
				break;
			}
			if (ch == 'e')
			{
				state = 105;
				break;
			}
			if (ch == 'f')
			{
				state = 86;
				break;
			}
			if (ch == 'l')
			{
				state = 86;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 97:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 78;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 98:
		{
			if (i == yytext.length())
			{
				printf("ERROR!");
				return"ERROR!";
			}
			if (ch == '!')
			{
				state = 91;
				break;
			}
			if (ch == '"')
			{
				state = 30;
				break;
			}
			if (ch == '%')
			{
				state = 91;
				break;
			}
			if (ch == '&')
			{
				state = 91;
				break;
			}
			if (ch == '\'')
			{
				state = 91;
					break;
			}
			if (ch == '+')
			{
				state = 91;
					break;
			}
			if (ch == ',')
			{
				state = 91;
				break;
			}
			if (ch == '-')
			{
				state = 91;
				break;
			}
			if (ch == '.')
			{
				state = 91;
				break;
			}
			if (ch == '/')
			{
				state = 91;
				break;
			}
			if (ch == '0')
			{
				state = 91;
				break;
			}
			if (ch == '1')
			{
				state = 91;
				break;
			}
			if (ch == '2')
			{
				state = 91;
				break;
			}
			if (ch == '3')
			{
				state = 91;
				break;
			}
			if (ch == '4')
			{
				state = 91;
				break;
			}
			if (ch == '5')
			{
				state = 91;
				break;
			}
			if (ch == '6')
			{
				state = 91;
				break;
			}
			if (ch == '7')
			{
				state = 91;
				break;
			}
			if (ch == '8')
			{
				state = 91;
				break;
			}
			if (ch == '9')
			{
				state = 91;
				break;
			}
			if (ch == ':')
			{
				state = 91;
				break;
			}
			if (ch == ';')
			{
				state = 91;
				break;
			}
			if (ch == '<')
			{
				state = 91;
				break;
			}
			if (ch == '=')
			{
				state = 91;
				break;
			}
			if (ch == '>')
			{
				state = 91;
				break;
			}
			if (ch == '?')
			{
				state = 91;
				break;
			}
			if (ch == 'A')
			{
				state = 91;
				break;
			}
			if (ch == 'B')
			{
				state = 91;
				break;
			}
			if (ch == 'C')
			{
				state = 91;
				break;
			}
			if (ch == 'D')
			{
				state = 91;
				break;
			}
			if (ch == 'E')
			{
				state = 91;
				break;
			}
			if (ch == 'F')
			{
				state = 91;
				break;
			}
			if (ch == 'G')
			{
				state = 91;
				break;
			}
			if (ch == 'H')
			{
				state = 91;
				break;
			}
			if (ch == 'I')
			{
				state = 91;
				break;
			}
			if (ch == 'J')
			{
				state = 91;
				break;
			}
			if (ch == 'K')
			{
				state = 91;
				break;
			}
			if (ch == 'L')
			{
				state = 91;
				break;
			}
			if (ch == 'M')
			{
				state = 91;
				break;
			}
			if (ch == 'N')
			{
				state = 91;
				break;
			}
			if (ch == 'O')
			{
				state = 91;
				break;
			}
			if (ch == 'P')
			{
				state = 91;
				break;
			}
			if (ch == 'Q')
			{
				state = 91;
				break;
			}
			if (ch == 'R')
			{
				state = 91;
				break;
			}
			if (ch == 'S')
			{
				state = 91;
				break;
			}
			if (ch == 'T')
			{
				state = 91;
				break;
			}
			if (ch == 'U')
			{
				state = 91;
				break;
			}
			if (ch == 'V')
			{
				state = 91;
				break;
			}
			if (ch == 'W')
			{
				state = 91;
				break;
			}
			if (ch == 'X')
			{
				state = 91;
				break;
			}
			if (ch == 'Y')
			{
				state = 91;
				break;
			}
			if (ch == 'Z')
			{
				state = 91;
				break;
			}
			if (ch == '[')
			{
				state = 91;
				break;
			}
			if (ch == '\\')
			{
				state = 106;
					break;
			}
			if (ch == ']')
			{
				state = 91;
					break;
			}
			if (ch == '^')
			{
				state = 91;
				break;
			}
			if (ch == '_')
			{
				state = 91;
				break;
			}
			if (ch == '`')
			{
				state = 91;
				break;
			}
			if (ch == 'a')
			{
				state = 91;
				break;
			}
			if (ch == 'b')
			{
				state = 91;
				break;
			}
			if (ch == 'c')
			{
				state = 91;
				break;
			}
			if (ch == 'd')
			{
				state = 91;
				break;
			}
			if (ch == 'e')
			{
				state = 91;
				break;
			}
			if (ch == 'f')
			{
				state = 91;
				break;
			}
			if (ch == 'g')
			{
				state = 91;
				break;
			}
			if (ch == 'h')
			{
				state = 91;
				break;
			}
			if (ch == 'i')
			{
				state = 91;
				break;
			}
			if (ch == 'j')
			{
				state = 91;
				break;
			}
			if (ch == 'k')
			{
				state = 91;
				break;
			}
			if (ch == 'l')
			{
				state = 91;
				break;
			}
			if (ch == 'm')
			{
				state = 91;
				break;
			}
			if (ch == 'n')
			{
				state = 91;
				break;
			}
			if (ch == 'o')
			{
				state = 91;
				break;
			}
			if (ch == 'p')
			{
				state = 91;
				break;
			}
			if (ch == 'q')
			{
				state = 91;
				break;
			}
			if (ch == 'r')
			{
				state = 91;
				break;
			}
			if (ch == 's')
			{
				state = 91;
				break;
			}
			if (ch == 't')
			{
				state = 91;
				break;
			}
			if (ch == 'u')
			{
				state = 91;
				break;
			}
			if (ch == 'v')
			{
				state = 91;
				break;
			}
			if (ch == 'w')
			{
				state = 91;
				break;
			}
			if (ch == 'x')
			{
				state = 91;
				break;
			}
			if (ch == 'y')
			{
				state = 91;
				break;
			}
			if (ch == 'z')
			{
				state = 91;
				break;
			}
			if (ch == '{')
			{
				state = 91;
				break;
			}
			if (ch == '}')
			{
				state = 91;
				break;
			}
			if (ch == '~')
			{
				state = 91;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 99:
		{
			if (i == yytext.length())
			{
				printf("ERROR!");
				return"ERROR!";
			}
			if (ch == '!')
			{
				state = 120;
				break;
			}
			if (ch == '"')
			{
				state = 120;
				break;
			}
			if (ch == '%')
			{
				state = 120;
				break;
			}
			if (ch == '&')
			{
				state = 120;
				break;
			}
			if (ch == '+')
			{
				state = 120;
				break;
			}
			if (ch == ',')
			{
				state = 120;
				break;
			}
			if (ch == '-')
			{
				state = 120;
				break;
			}
			if (ch == '.')
			{
				state = 120;
				break;
			}
			if (ch == '/')
			{
				state = 120;
				break;
			}
			if (ch == '0')
			{
				state = 120;
				break;
			}
			if (ch == '1')
			{
				state = 120;
				break;
			}
			if (ch == '2')
			{
				state = 120;
				break;
			}
			if (ch == '3')
			{
				state = 120;
				break;
			}
			if (ch == '4')
			{
				state = 120;
				break;
			}
			if (ch == '5')
			{
				state = 120;
				break;
			}
			if (ch == '6')
			{
				state = 120;
				break;
			}
			if (ch == '7')
			{
				state = 120;
				break;
			}
			if (ch == '8')
			{
				state = 120;
				break;
			}
			if (ch == '9')
			{
				state = 120;
				break;
			}
			if (ch == ':')
			{
				state = 120;
				break;
			}
			if (ch == ';')
			{
				state = 120;
				break;
			}
			if (ch == '<')
			{
				state = 120;
				break;
			}
			if (ch == '=')
			{
				state = 120;
				break;
			}
			if (ch == '>')
			{
				state = 120;
				break;
			}
			if (ch == '?')
			{
				state = 120;
				break;
			}
			if (ch == 'A')
			{
				state = 120;
				break;
			}
			if (ch == 'B')
			{
				state = 120;
				break;
			}
			if (ch == 'C')
			{
				state = 120;
				break;
			}
			if (ch == 'D')
			{
				state = 120;
				break;
			}
			if (ch == 'E')
			{
				state = 120;
				break;
			}
			if (ch == 'F')
			{
				state = 120;
				break;
			}
			if (ch == 'G')
			{
				state = 120;
				break;
			}
			if (ch == 'H')
			{
				state = 120;
				break;
			}
			if (ch == 'I')
			{
				state = 120;
				break;
			}
			if (ch == 'J')
			{
				state = 120;
				break;
			}
			if (ch == 'K')
			{
				state = 120;
				break;
			}
			if (ch == 'L')
			{
				state = 120;
				break;
			}
			if (ch == 'M')
			{
				state = 120;
				break;
			}
			if (ch == 'N')
			{
				state = 120;
				break;
			}
			if (ch == 'O')
			{
				state = 120;
				break;
			}
			if (ch == 'P')
			{
				state = 120;
				break;
			}
			if (ch == 'Q')
			{
				state = 120;
				break;
			}
			if (ch == 'R')
			{
				state = 120;
				break;
			}
			if (ch == 'S')
			{
				state = 120;
				break;
			}
			if (ch == 'T')
			{
				state = 120;
				break;
			}
			if (ch == 'U')
			{
				state = 120;
				break;
			}
			if (ch == 'V')
			{
				state = 120;
				break;
			}
			if (ch == 'W')
			{
				state = 120;
				break;
			}
			if (ch == 'X')
			{
				state = 120;
				break;
			}
			if (ch == 'Y')
			{
				state = 120;
				break;
			}
			if (ch == 'Z')
			{
				state = 120;
				break;
			}
			if (ch == '[')
			{
				state = 120;
				break;
			}
			if (ch == '\\')
			{
				state = 119;
					break;
			}
			if (ch == ']')
			{
				state = 120;
					break;
			}
			if (ch == '^')
			{
				state = 120;
				break;
			}
			if (ch == '_')
			{
				state = 120;
				break;
			}
			if (ch == '`')
			{
				state = 120;
				break;
			}
			if (ch == 'a')
			{
				state = 120;
				break;
			}
			if (ch == 'b')
			{
				state = 120;
				break;
			}
			if (ch == 'c')
			{
				state = 120;
				break;
			}
			if (ch == 'd')
			{
				state = 120;
				break;
			}
			if (ch == 'e')
			{
				state = 120;
				break;
			}
			if (ch == 'f')
			{
				state = 120;
				break;
			}
			if (ch == 'g')
			{
				state = 120;
				break;
			}
			if (ch == 'h')
			{
				state = 120;
				break;
			}
			if (ch == 'i')
			{
				state = 120;
				break;
			}
			if (ch == 'j')
			{
				state = 120;
				break;
			}
			if (ch == 'k')
			{
				state = 120;
				break;
			}
			if (ch == 'l')
			{
				state = 120;
				break;
			}
			if (ch == 'm')
			{
				state = 120;
				break;
			}
			if (ch == 'n')
			{
				state = 120;
				break;
			}
			if (ch == 'o')
			{
				state = 120;
				break;
			}
			if (ch == 'p')
			{
				state = 120;
				break;
			}
			if (ch == 'q')
			{
				state = 120;
				break;
			}
			if (ch == 'r')
			{
				state = 120;
				break;
			}
			if (ch == 's')
			{
				state = 120;
				break;
			}
			if (ch == 't')
			{
				state = 120;
				break;
			}
			if (ch == 'u')
			{
				state = 120;
				break;
			}
			if (ch == 'v')
			{
				state = 120;
				break;
			}
			if (ch == 'w')
			{
				state = 120;
				break;
			}
			if (ch == 'x')
			{
				state = 120;
				break;
			}
			if (ch == 'y')
			{
				state = 120;
				break;
			}
			if (ch == 'z')
			{
				state = 120;
				break;
			}
			if (ch == '{')
			{
				state = 120;
				break;
			}
			if (ch == '}')
			{
				state = 120;
				break;
			}
			if (ch == '~')
			{
				state = 120;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 100:
		{
			if (ch == '.')
			{
				state = 10;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 101:
		{
			if (ch == '.')
			{
				state = 137;
				break;
			}
			if (ch == '0')
			{
				state = 85;
				break;
			}
			if (ch == '1')
			{
				state = 85;
				break;
			}
			if (ch == '2')
			{
				state = 85;
				break;
			}
			if (ch == '3')
			{
				state = 85;
				break;
			}
			if (ch == '4')
			{
				state = 85;
				break;
			}
			if (ch == '5')
			{
				state = 85;
				break;
			}
			if (ch == '6')
			{
				state = 85;
				break;
			}
			if (ch == '7')
			{
				state = 85;
				break;
			}
			if (ch == '8')
			{
				state = 85;
				break;
			}
			if (ch == '9')
			{
				state = 85;
				break;
			}
			if (ch == 'A')
			{
				state = 85;
				break;
			}
			if (ch == 'B')
			{
				state = 85;
				break;
			}
			if (ch == 'C')
			{
				state = 85;
				break;
			}
			if (ch == 'D')
			{
				state = 85;
				break;
			}
			if (ch == 'E')
			{
				state = 85;
				break;
			}
			if (ch == 'F')
			{
				state = 85;
				break;
			}
			if (ch == 'a')
			{
				state = 85;
				break;
			}
			if (ch == 'b')
			{
				state = 85;
				break;
			}
			if (ch == 'c')
			{
				state = 85;
				break;
			}
			if (ch == 'd')
			{
				state = 85;
				break;
			}
			if (ch == 'e')
			{
				state = 85;
				break;
			}
			if (ch == 'f')
			{
				state = 85;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 102:
		{
			if (ch == '.')
			{
				state = 93;
				break;
			}
			if (ch == '0')
			{
				state = 102;
				break;
			}
			if (ch == '1')
			{
				state = 102;
				break;
			}
			if (ch == '2')
			{
				state = 102;
				break;
			}
			if (ch == '3')
			{
				state = 102;
				break;
			}
			if (ch == '4')
			{
				state = 102;
				break;
			}
			if (ch == '5')
			{
				state = 102;
				break;
			}
			if (ch == '6')
			{
				state = 102;
				break;
			}
			if (ch == '7')
			{
				state = 102;
				break;
			}
			if (ch == '8')
			{
				state = 102;
				break;
			}
			if (ch == '9')
			{
				state = 102;
				break;
			}
			if (ch == 'E')
			{
				state = 104;
				break;
			}
			if (ch == 'e')
			{
				state = 104;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 103:
		{
			if (ch == '+')
			{
				state = 115;
				break;
			}
			if (ch == '-')
			{
				state = 115;
				break;
			}
			if (ch == '0')
			{
				state = 89;
				break;
			}
			if (ch == '1')
			{
				state = 89;
				break;
			}
			if (ch == '2')
			{
				state = 89;
				break;
			}
			if (ch == '3')
			{
				state = 89;
				break;
			}
			if (ch == '4')
			{
				state = 89;
				break;
			}
			if (ch == '5')
			{
				state = 89;
				break;
			}
			if (ch == '6')
			{
				state = 89;
				break;
			}
			if (ch == '7')
			{
				state = 89;
				break;
			}
			if (ch == '8')
			{
				state = 89;
				break;
			}
			if (ch == '9')
			{
				state = 89;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 104:
		{
			if (ch == '+')
			{
				state = 116;
				break;
			}
			if (ch == '-')
			{
				state = 116;
				break;
			}
			if (ch == '0')
			{
				state = 92;
				break;
			}
			if (ch == '1')
			{
				state = 92;
				break;
			}
			if (ch == '2')
			{
				state = 92;
				break;
			}
			if (ch == '3')
			{
				state = 92;
				break;
			}
			if (ch == '4')
			{
				state = 92;
				break;
			}
			if (ch == '5')
			{
				state = 92;
				break;
			}
			if (ch == '6')
			{
				state = 92;
				break;
			}
			if (ch == '7')
			{
				state = 92;
				break;
			}
			if (ch == '8')
			{
				state = 92;
				break;
			}
			if (ch == '9')
			{
				state = 92;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 105:
		{
			if (ch == '+')
			{
				state = 117;
				break;
			}
			if (ch == '-')
			{
				state = 117;
				break;
			}
			if (ch == '0')
			{
				state = 95;
				break;
			}
			if (ch == '1')
			{
				state = 95;
				break;
			}
			if (ch == '2')
			{
				state = 95;
				break;
			}
			if (ch == '3')
			{
				state = 95;
				break;
			}
			if (ch == '4')
			{
				state = 95;
				break;
			}
			if (ch == '5')
			{
				state = 95;
				break;
			}
			if (ch == '6')
			{
				state = 95;
				break;
			}
			if (ch == '7')
			{
				state = 95;
				break;
			}
			if (ch == '8')
			{
				state = 95;
				break;
			}
			if (ch == '9')
			{
				state = 95;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 106:
		{
			if (ch == '!')
			{
				state = 91;
				break;
			}
			if (ch == '"')
			{
				state = 91;
				break;
			}
			if (ch == '%')
			{
				state = 91;
				break;
			}
			if (ch == '&')
			{
				state = 91;
				break;
			}
			if (ch == '\'')
			{
				state = 91;
					break;
			}
			if (ch == '+')
			{
				state = 91;
					break;
			}
			if (ch == ',')
			{
				state = 91;
				break;
			}
			if (ch == '-')
			{
				state = 91;
				break;
			}
			if (ch == '.')
			{
				state = 91;
				break;
			}
			if (ch == '/')
			{
				state = 91;
				break;
			}
			if (ch == '0')
			{
				state = 91;
				break;
			}
			if (ch == '1')
			{
				state = 91;
				break;
			}
			if (ch == '2')
			{
				state = 91;
				break;
			}
			if (ch == '3')
			{
				state = 91;
				break;
			}
			if (ch == '4')
			{
				state = 91;
				break;
			}
			if (ch == '5')
			{
				state = 91;
				break;
			}
			if (ch == '6')
			{
				state = 91;
				break;
			}
			if (ch == '7')
			{
				state = 91;
				break;
			}
			if (ch == '8')
			{
				state = 91;
				break;
			}
			if (ch == '9')
			{
				state = 91;
				break;
			}
			if (ch == ':')
			{
				state = 91;
				break;
			}
			if (ch == ';')
			{
				state = 91;
				break;
			}
			if (ch == '<')
			{
				state = 91;
				break;
			}
			if (ch == '=')
			{
				state = 91;
				break;
			}
			if (ch == '>')
			{
				state = 91;
				break;
			}
			if (ch == '?')
			{
				state = 91;
				break;
			}
			if (ch == 'A')
			{
				state = 91;
				break;
			}
			if (ch == 'B')
			{
				state = 91;
				break;
			}
			if (ch == 'C')
			{
				state = 91;
				break;
			}
			if (ch == 'D')
			{
				state = 91;
				break;
			}
			if (ch == 'E')
			{
				state = 91;
				break;
			}
			if (ch == 'F')
			{
				state = 91;
				break;
			}
			if (ch == 'G')
			{
				state = 91;
				break;
			}
			if (ch == 'H')
			{
				state = 91;
				break;
			}
			if (ch == 'I')
			{
				state = 91;
				break;
			}
			if (ch == 'J')
			{
				state = 91;
				break;
			}
			if (ch == 'K')
			{
				state = 91;
				break;
			}
			if (ch == 'L')
			{
				state = 91;
				break;
			}
			if (ch == 'M')
			{
				state = 91;
				break;
			}
			if (ch == 'N')
			{
				state = 91;
				break;
			}
			if (ch == 'O')
			{
				state = 91;
				break;
			}
			if (ch == 'P')
			{
				state = 91;
				break;
			}
			if (ch == 'Q')
			{
				state = 91;
				break;
			}
			if (ch == 'R')
			{
				state = 91;
				break;
			}
			if (ch == 'S')
			{
				state = 91;
				break;
			}
			if (ch == 'T')
			{
				state = 91;
				break;
			}
			if (ch == 'U')
			{
				state = 91;
				break;
			}
			if (ch == 'V')
			{
				state = 91;
				break;
			}
			if (ch == 'W')
			{
				state = 91;
				break;
			}
			if (ch == 'X')
			{
				state = 91;
				break;
			}
			if (ch == 'Y')
			{
				state = 91;
				break;
			}
			if (ch == 'Z')
			{
				state = 91;
				break;
			}
			if (ch == '[')
			{
				state = 91;
				break;
			}
			if (ch == '\\')
			{
				state = 91;
					break;
			}
			if (ch == ']')
			{
				state = 91;
					break;
			}
			if (ch == '^')
			{
				state = 91;
				break;
			}
			if (ch == '_')
			{
				state = 91;
				break;
			}
			if (ch == '`')
			{
				state = 91;
				break;
			}
			if (ch == 'a')
			{
				state = 91;
				break;
			}
			if (ch == 'b')
			{
				state = 91;
				break;
			}
			if (ch == 'c')
			{
				state = 91;
				break;
			}
			if (ch == 'd')
			{
				state = 91;
				break;
			}
			if (ch == 'e')
			{
				state = 91;
				break;
			}
			if (ch == 'f')
			{
				state = 91;
				break;
			}
			if (ch == 'g')
			{
				state = 91;
				break;
			}
			if (ch == 'h')
			{
				state = 91;
				break;
			}
			if (ch == 'i')
			{
				state = 91;
				break;
			}
			if (ch == 'j')
			{
				state = 91;
				break;
			}
			if (ch == 'k')
			{
				state = 91;
				break;
			}
			if (ch == 'l')
			{
				state = 91;
				break;
			}
			if (ch == 'm')
			{
				state = 91;
				break;
			}
			if (ch == 'n')
			{
				state = 91;
				break;
			}
			if (ch == 'o')
			{
				state = 91;
				break;
			}
			if (ch == 'p')
			{
				state = 91;
				break;
			}
			if (ch == 'q')
			{
				state = 91;
				break;
			}
			if (ch == 'r')
			{
				state = 91;
				break;
			}
			if (ch == 's')
			{
				state = 91;
				break;
			}
			if (ch == 't')
			{
				state = 91;
				break;
			}
			if (ch == 'u')
			{
				state = 91;
				break;
			}
			if (ch == 'v')
			{
				state = 91;
				break;
			}
			if (ch == 'w')
			{
				state = 91;
				break;
			}
			if (ch == 'x')
			{
				state = 91;
				break;
			}
			if (ch == 'y')
			{
				state = 91;
				break;
			}
			if (ch == 'z')
			{
				state = 91;
				break;
			}
			if (ch == '{')
			{
				state = 91;
				break;
			}
			if (ch == '}')
			{
				state = 91;
				break;
			}
			if (ch == '~')
			{
				state = 91;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 107:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'L')
			{
				state = 108;
				break;
			}
			if (ch == 'l')
			{
				state = 122;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 108:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'L')
			{
				state = 121;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 109:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'L')
			{
				state = 123;
				break;
			}
			if (ch == 'U')
			{
				state = 121;
				break;
			}
			if (ch == 'u')
			{
				state = 121;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 110:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == '.')
			{
				state = 93;
				break;
			}
			if (ch == '0')
			{
				state = 110;
				break;
			}
			if (ch == '1')
			{
				state = 110;
				break;
			}
			if (ch == '2')
			{
				state = 110;
				break;
			}
			if (ch == '3')
			{
				state = 110;
				break;
			}
			if (ch == '4')
			{
				state = 110;
				break;
			}
			if (ch == '5')
			{
				state = 110;
				break;
			}
			if (ch == '6')
			{
				state = 110;
				break;
			}
			if (ch == '7')
			{
				state = 110;
				break;
			}
			if (ch == '8')
			{
				state = 102;
				break;
			}
			if (ch == '9')
			{
				state = 102;
				break;
			}
			if (ch == 'E')
			{
				state = 104;
				break;
			}
			if (ch == 'L')
			{
				state = 127;
				break;
			}
			if (ch == 'U')
			{
				state = 125;
				break;
			}
			if (ch == 'e')
			{
				state = 104;
				break;
			}
			if (ch == 'l')
			{
				state = 143;
				break;
			}
			if (ch == 'u')
			{
				state = 125;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 111:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == '.')
			{
				state = 93;
				break;
			}
			if (ch == '0')
			{
				state = 110;
				break;
			}
			if (ch == '1')
			{
				state = 110;
				break;
			}
			if (ch == '2')
			{
				state = 110;
				break;
			}
			if (ch == '3')
			{
				state = 110;
				break;
			}
			if (ch == '4')
			{
				state = 110;
				break;
			}
			if (ch == '5')
			{
				state = 110;
				break;
			}
			if (ch == '6')
			{
				state = 110;
				break;
			}
			if (ch == '7')
			{
				state = 110;
				break;
			}
			if (ch == '8')
			{
				state = 102;
				break;
			}
			if (ch == '9')
			{
				state = 102;
				break;
			}
			if (ch == 'E')
			{
				state = 104;
				break;
			}
			if (ch == 'L')
			{
				state = 127;
				break;
			}
			if (ch == 'U')
			{
				state = 125;
				break;
			}
			if (ch == 'X')
			{
				state = 101;
				break;
			}
			if (ch == 'e')
			{
				state = 104;
				break;
			}
			if (ch == 'l')
			{
				state = 143;
				break;
			}
			if (ch == 'u')
			{
				state = 125;
				break;
			}
			if (ch == 'x')
			{
				state = 101;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 112:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 35;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 113:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 77;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 114:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 80;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 115:
		{
			if (ch == '0')
			{
				state = 89;
				break;
			}
			if (ch == '1')
			{
				state = 89;
				break;
			}
			if (ch == '2')
			{
				state = 89;
				break;
			}
			if (ch == '3')
			{
				state = 89;
				break;
			}
			if (ch == '4')
			{
				state = 89;
				break;
			}
			if (ch == '5')
			{
				state = 89;
				break;
			}
			if (ch == '6')
			{
				state = 89;
				break;
			}
			if (ch == '7')
			{
				state = 89;
				break;
			}
			if (ch == '8')
			{
				state = 89;
				break;
			}
			if (ch == '9')
			{
				state = 89;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 116:
		{
			if (ch == '0')
			{
				state = 92;
				break;
			}
			if (ch == '1')
			{
				state = 92;
				break;
			}
			if (ch == '2')
			{
				state = 92;
				break;
			}
			if (ch == '3')
			{
				state = 92;
				break;
			}
			if (ch == '4')
			{
				state = 92;
				break;
			}
			if (ch == '5')
			{
				state = 92;
				break;
			}
			if (ch == '6')
			{
				state = 92;
				break;
			}
			if (ch == '7')
			{
				state = 92;
				break;
			}
			if (ch == '8')
			{
				state = 92;
				break;
			}
			if (ch == '9')
			{
				state = 92;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 117:
		{
			if (ch == '0')
			{
				state = 95;
				break;
			}
			if (ch == '1')
			{
				state = 95;
				break;
			}
			if (ch == '2')
			{
				state = 95;
				break;
			}
			if (ch == '3')
			{
				state = 95;
				break;
			}
			if (ch == '4')
			{
				state = 95;
				break;
			}
			if (ch == '5')
			{
				state = 95;
				break;
			}
			if (ch == '6')
			{
				state = 95;
				break;
			}
			if (ch == '7')
			{
				state = 95;
				break;
			}
			if (ch == '8')
			{
				state = 95;
				break;
			}
			if (ch == '9')
			{
				state = 95;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 118:
		{
			if (ch == '!')
			{
				state = 120;
				break;
			}
			if (ch == '"')
			{
				state = 120;
				break;
			}
			if (ch == '%')
			{
				state = 120;
				break;
			}
			if (ch == '&')
			{
				state = 120;
				break;
			}
			if (ch == '+')
			{
				state = 120;
				break;
			}
			if (ch == ',')
			{
				state = 120;
				break;
			}
			if (ch == '-')
			{
				state = 120;
				break;
			}
			if (ch == '.')
			{
				state = 120;
				break;
			}
			if (ch == '/')
			{
				state = 120;
				break;
			}
			if (ch == '0')
			{
				state = 120;
				break;
			}
			if (ch == '1')
			{
				state = 120;
				break;
			}
			if (ch == '2')
			{
				state = 120;
				break;
			}
			if (ch == '3')
			{
				state = 120;
				break;
			}
			if (ch == '4')
			{
				state = 120;
				break;
			}
			if (ch == '5')
			{
				state = 120;
				break;
			}
			if (ch == '6')
			{
				state = 120;
				break;
			}
			if (ch == '7')
			{
				state = 120;
				break;
			}
			if (ch == '8')
			{
				state = 120;
				break;
			}
			if (ch == '9')
			{
				state = 120;
				break;
			}
			if (ch == ':')
			{
				state = 120;
				break;
			}
			if (ch == ';')
			{
				state = 120;
				break;
			}
			if (ch == '<')
			{
				state = 120;
				break;
			}
			if (ch == '=')
			{
				state = 120;
				break;
			}
			if (ch == '>')
			{
				state = 120;
				break;
			}
			if (ch == '?')
			{
				state = 120;
				break;
			}
			if (ch == 'A')
			{
				state = 120;
				break;
			}
			if (ch == 'B')
			{
				state = 120;
				break;
			}
			if (ch == 'C')
			{
				state = 120;
				break;
			}
			if (ch == 'D')
			{
				state = 120;
				break;
			}
			if (ch == 'E')
			{
				state = 120;
				break;
			}
			if (ch == 'F')
			{
				state = 120;
				break;
			}
			if (ch == 'G')
			{
				state = 120;
				break;
			}
			if (ch == 'H')
			{
				state = 120;
				break;
			}
			if (ch == 'I')
			{
				state = 120;
				break;
			}
			if (ch == 'J')
			{
				state = 120;
				break;
			}
			if (ch == 'K')
			{
				state = 120;
				break;
			}
			if (ch == 'L')
			{
				state = 120;
				break;
			}
			if (ch == 'M')
			{
				state = 120;
				break;
			}
			if (ch == 'N')
			{
				state = 120;
				break;
			}
			if (ch == 'O')
			{
				state = 120;
				break;
			}
			if (ch == 'P')
			{
				state = 120;
				break;
			}
			if (ch == 'Q')
			{
				state = 120;
				break;
			}
			if (ch == 'R')
			{
				state = 120;
				break;
			}
			if (ch == 'S')
			{
				state = 120;
				break;
			}
			if (ch == 'T')
			{
				state = 120;
				break;
			}
			if (ch == 'U')
			{
				state = 120;
				break;
			}
			if (ch == 'V')
			{
				state = 120;
				break;
			}
			if (ch == 'W')
			{
				state = 120;
				break;
			}
			if (ch == 'X')
			{
				state = 120;
				break;
			}
			if (ch == 'Y')
			{
				state = 120;
				break;
			}
			if (ch == 'Z')
			{
				state = 120;
				break;
			}
			if (ch == '[')
			{
				state = 120;
				break;
			}
			if (ch == '\\')
			{
				state = 119;
					break;
			}
			if (ch == ']')
			{
				state = 120;
					break;
			}
			if (ch == '^')
			{
				state = 120;
				break;
			}
			if (ch == '_')
			{
				state = 120;
				break;
			}
			if (ch == '`')
			{
				state = 120;
				break;
			}
			if (ch == 'a')
			{
				state = 120;
				break;
			}
			if (ch == 'b')
			{
				state = 120;
				break;
			}
			if (ch == 'c')
			{
				state = 120;
				break;
			}
			if (ch == 'd')
			{
				state = 120;
				break;
			}
			if (ch == 'e')
			{
				state = 120;
				break;
			}
			if (ch == 'f')
			{
				state = 120;
				break;
			}
			if (ch == 'g')
			{
				state = 120;
				break;
			}
			if (ch == 'h')
			{
				state = 120;
				break;
			}
			if (ch == 'i')
			{
				state = 120;
				break;
			}
			if (ch == 'j')
			{
				state = 120;
				break;
			}
			if (ch == 'k')
			{
				state = 120;
				break;
			}
			if (ch == 'l')
			{
				state = 120;
				break;
			}
			if (ch == 'm')
			{
				state = 120;
				break;
			}
			if (ch == 'n')
			{
				state = 120;
				break;
			}
			if (ch == 'o')
			{
				state = 120;
				break;
			}
			if (ch == 'p')
			{
				state = 120;
				break;
			}
			if (ch == 'q')
			{
				state = 120;
				break;
			}
			if (ch == 'r')
			{
				state = 120;
				break;
			}
			if (ch == 's')
			{
				state = 120;
				break;
			}
			if (ch == 't')
			{
				state = 120;
				break;
			}
			if (ch == 'u')
			{
				state = 120;
				break;
			}
			if (ch == 'v')
			{
				state = 120;
				break;
			}
			if (ch == 'w')
			{
				state = 120;
				break;
			}
			if (ch == 'x')
			{
				state = 120;
				break;
			}
			if (ch == 'y')
			{
				state = 120;
				break;
			}
			if (ch == 'z')
			{
				state = 120;
				break;
			}
			if (ch == '{')
			{
				state = 120;
				break;
			}
			if (ch == '}')
			{
				state = 120;
				break;
			}
			if (ch == '~')
			{
				state = 120;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 119:
		{
			if (ch == '!')
			{
				state = 120;
				break;
			}
			if (ch == '"')
			{
				state = 120;
				break;
			}
			if (ch == '%')
			{
				state = 120;
				break;
			}
			if (ch == '&')
			{
				state = 120;
				break;
			}
			if (ch == '\'')
			{
				state = 120;
					break;
			}
			if (ch == '+')
			{
				state = 120;
					break;
			}
			if (ch == ',')
			{
				state = 120;
				break;
			}
			if (ch == '-')
			{
				state = 120;
				break;
			}
			if (ch == '.')
			{
				state = 120;
				break;
			}
			if (ch == '/')
			{
				state = 120;
				break;
			}
			if (ch == '0')
			{
				state = 120;
				break;
			}
			if (ch == '1')
			{
				state = 120;
				break;
			}
			if (ch == '2')
			{
				state = 120;
				break;
			}
			if (ch == '3')
			{
				state = 120;
				break;
			}
			if (ch == '4')
			{
				state = 120;
				break;
			}
			if (ch == '5')
			{
				state = 120;
				break;
			}
			if (ch == '6')
			{
				state = 120;
				break;
			}
			if (ch == '7')
			{
				state = 120;
				break;
			}
			if (ch == '8')
			{
				state = 120;
				break;
			}
			if (ch == '9')
			{
				state = 120;
				break;
			}
			if (ch == ':')
			{
				state = 120;
				break;
			}
			if (ch == ';')
			{
				state = 120;
				break;
			}
			if (ch == '<')
			{
				state = 120;
				break;
			}
			if (ch == '=')
			{
				state = 120;
				break;
			}
			if (ch == '>')
			{
				state = 120;
				break;
			}
			if (ch == '?')
			{
				state = 120;
				break;
			}
			if (ch == 'A')
			{
				state = 120;
				break;
			}
			if (ch == 'B')
			{
				state = 120;
				break;
			}
			if (ch == 'C')
			{
				state = 120;
				break;
			}
			if (ch == 'D')
			{
				state = 120;
				break;
			}
			if (ch == 'E')
			{
				state = 120;
				break;
			}
			if (ch == 'F')
			{
				state = 120;
				break;
			}
			if (ch == 'G')
			{
				state = 120;
				break;
			}
			if (ch == 'H')
			{
				state = 120;
				break;
			}
			if (ch == 'I')
			{
				state = 120;
				break;
			}
			if (ch == 'J')
			{
				state = 120;
				break;
			}
			if (ch == 'K')
			{
				state = 120;
				break;
			}
			if (ch == 'L')
			{
				state = 120;
				break;
			}
			if (ch == 'M')
			{
				state = 120;
				break;
			}
			if (ch == 'N')
			{
				state = 120;
				break;
			}
			if (ch == 'O')
			{
				state = 120;
				break;
			}
			if (ch == 'P')
			{
				state = 120;
				break;
			}
			if (ch == 'Q')
			{
				state = 120;
				break;
			}
			if (ch == 'R')
			{
				state = 120;
				break;
			}
			if (ch == 'S')
			{
				state = 120;
				break;
			}
			if (ch == 'T')
			{
				state = 120;
				break;
			}
			if (ch == 'U')
			{
				state = 120;
				break;
			}
			if (ch == 'V')
			{
				state = 120;
				break;
			}
			if (ch == 'W')
			{
				state = 120;
				break;
			}
			if (ch == 'X')
			{
				state = 120;
				break;
			}
			if (ch == 'Y')
			{
				state = 120;
				break;
			}
			if (ch == 'Z')
			{
				state = 120;
				break;
			}
			if (ch == '[')
			{
				state = 120;
				break;
			}
			if (ch == '\\')
			{
				state = 120;
					break;
			}
			if (ch == ']')
			{
				state = 120;
					break;
			}
			if (ch == '^')
			{
				state = 120;
				break;
			}
			if (ch == '_')
			{
				state = 120;
				break;
			}
			if (ch == '`')
			{
				state = 120;
				break;
			}
			if (ch == 'a')
			{
				state = 120;
				break;
			}
			if (ch == 'b')
			{
				state = 120;
				break;
			}
			if (ch == 'c')
			{
				state = 120;
				break;
			}
			if (ch == 'd')
			{
				state = 120;
				break;
			}
			if (ch == 'e')
			{
				state = 120;
				break;
			}
			if (ch == 'f')
			{
				state = 120;
				break;
			}
			if (ch == 'g')
			{
				state = 120;
				break;
			}
			if (ch == 'h')
			{
				state = 120;
				break;
			}
			if (ch == 'i')
			{
				state = 120;
				break;
			}
			if (ch == 'j')
			{
				state = 120;
				break;
			}
			if (ch == 'k')
			{
				state = 120;
				break;
			}
			if (ch == 'l')
			{
				state = 120;
				break;
			}
			if (ch == 'm')
			{
				state = 120;
				break;
			}
			if (ch == 'n')
			{
				state = 120;
				break;
			}
			if (ch == 'o')
			{
				state = 120;
				break;
			}
			if (ch == 'p')
			{
				state = 120;
				break;
			}
			if (ch == 'q')
			{
				state = 120;
				break;
			}
			if (ch == 'r')
			{
				state = 120;
				break;
			}
			if (ch == 's')
			{
				state = 120;
				break;
			}
			if (ch == 't')
			{
				state = 120;
				break;
			}
			if (ch == 'u')
			{
				state = 120;
				break;
			}
			if (ch == 'v')
			{
				state = 120;
				break;
			}
			if (ch == 'w')
			{
				state = 120;
				break;
			}
			if (ch == 'x')
			{
				state = 120;
				break;
			}
			if (ch == 'y')
			{
				state = 120;
				break;
			}
			if (ch == 'z')
			{
				state = 120;
				break;
			}
			if (ch == '{')
			{
				state = 120;
				break;
			}
			if (ch == '}')
			{
				state = 120;
				break;
			}
			if (ch == '~')
			{
				state = 120;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 120:
		{
			if (ch == '!')
			{
				state = 120;
				break;
			}
			if (ch == '"')
			{
				state = 120;
				break;
			}
			if (ch == '%')
			{
				state = 120;
				break;
			}
			if (ch == '&')
			{
				state = 120;
				break;
			}
			if (ch == '\'')
			{
				state = 140;
					break;
			}
			if (ch == '+')
			{
				state = 120;
					break;
			}
			if (ch == ',')
			{
				state = 120;
				break;
			}
			if (ch == '-')
			{
				state = 120;
				break;
			}
			if (ch == '.')
			{
				state = 120;
				break;
			}
			if (ch == '/')
			{
				state = 120;
				break;
			}
			if (ch == '0')
			{
				state = 120;
				break;
			}
			if (ch == '1')
			{
				state = 120;
				break;
			}
			if (ch == '2')
			{
				state = 120;
				break;
			}
			if (ch == '3')
			{
				state = 120;
				break;
			}
			if (ch == '4')
			{
				state = 120;
				break;
			}
			if (ch == '5')
			{
				state = 120;
				break;
			}
			if (ch == '6')
			{
				state = 120;
				break;
			}
			if (ch == '7')
			{
				state = 120;
				break;
			}
			if (ch == '8')
			{
				state = 120;
				break;
			}
			if (ch == '9')
			{
				state = 120;
				break;
			}
			if (ch == ':')
			{
				state = 120;
				break;
			}
			if (ch == ';')
			{
				state = 120;
				break;
			}
			if (ch == '<')
			{
				state = 120;
				break;
			}
			if (ch == '=')
			{
				state = 120;
				break;
			}
			if (ch == '>')
			{
				state = 120;
				break;
			}
			if (ch == '?')
			{
				state = 120;
				break;
			}
			if (ch == 'A')
			{
				state = 120;
				break;
			}
			if (ch == 'B')
			{
				state = 120;
				break;
			}
			if (ch == 'C')
			{
				state = 120;
				break;
			}
			if (ch == 'D')
			{
				state = 120;
				break;
			}
			if (ch == 'E')
			{
				state = 120;
				break;
			}
			if (ch == 'F')
			{
				state = 120;
				break;
			}
			if (ch == 'G')
			{
				state = 120;
				break;
			}
			if (ch == 'H')
			{
				state = 120;
				break;
			}
			if (ch == 'I')
			{
				state = 120;
				break;
			}
			if (ch == 'J')
			{
				state = 120;
				break;
			}
			if (ch == 'K')
			{
				state = 120;
				break;
			}
			if (ch == 'L')
			{
				state = 120;
				break;
			}
			if (ch == 'M')
			{
				state = 120;
				break;
			}
			if (ch == 'N')
			{
				state = 120;
				break;
			}
			if (ch == 'O')
			{
				state = 120;
				break;
			}
			if (ch == 'P')
			{
				state = 120;
				break;
			}
			if (ch == 'Q')
			{
				state = 120;
				break;
			}
			if (ch == 'R')
			{
				state = 120;
				break;
			}
			if (ch == 'S')
			{
				state = 120;
				break;
			}
			if (ch == 'T')
			{
				state = 120;
				break;
			}
			if (ch == 'U')
			{
				state = 120;
				break;
			}
			if (ch == 'V')
			{
				state = 120;
				break;
			}
			if (ch == 'W')
			{
				state = 120;
				break;
			}
			if (ch == 'X')
			{
				state = 120;
				break;
			}
			if (ch == 'Y')
			{
				state = 120;
				break;
			}
			if (ch == 'Z')
			{
				state = 120;
				break;
			}
			if (ch == '[')
			{
				state = 120;
				break;
			}
			if (ch == '\\')
			{
				state = 119;
					break;
			}
			if (ch == ']')
			{
				state = 120;
					break;
			}
			if (ch == '^')
			{
				state = 120;
				break;
			}
			if (ch == '_')
			{
				state = 120;
				break;
			}
			if (ch == '`')
			{
				state = 120;
				break;
			}
			if (ch == 'a')
			{
				state = 120;
				break;
			}
			if (ch == 'b')
			{
				state = 120;
				break;
			}
			if (ch == 'c')
			{
				state = 120;
				break;
			}
			if (ch == 'd')
			{
				state = 120;
				break;
			}
			if (ch == 'e')
			{
				state = 120;
				break;
			}
			if (ch == 'f')
			{
				state = 120;
				break;
			}
			if (ch == 'g')
			{
				state = 120;
				break;
			}
			if (ch == 'h')
			{
				state = 120;
				break;
			}
			if (ch == 'i')
			{
				state = 120;
				break;
			}
			if (ch == 'j')
			{
				state = 120;
				break;
			}
			if (ch == 'k')
			{
				state = 120;
				break;
			}
			if (ch == 'l')
			{
				state = 120;
				break;
			}
			if (ch == 'm')
			{
				state = 120;
				break;
			}
			if (ch == 'n')
			{
				state = 120;
				break;
			}
			if (ch == 'o')
			{
				state = 120;
				break;
			}
			if (ch == 'p')
			{
				state = 120;
				break;
			}
			if (ch == 'q')
			{
				state = 120;
				break;
			}
			if (ch == 'r')
			{
				state = 120;
				break;
			}
			if (ch == 's')
			{
				state = 120;
				break;
			}
			if (ch == 't')
			{
				state = 120;
				break;
			}
			if (ch == 'u')
			{
				state = 120;
				break;
			}
			if (ch == 'v')
			{
				state = 120;
				break;
			}
			if (ch == 'w')
			{
				state = 120;
				break;
			}
			if (ch == 'x')
			{
				state = 120;
				break;
			}
			if (ch == 'y')
			{
				state = 120;
				break;
			}
			if (ch == 'z')
			{
				state = 120;
				break;
			}
			if (ch == '{')
			{
				state = 120;
				break;
			}
			if (ch == '}')
			{
				state = 120;
				break;
			}
			if (ch == '~')
			{
				state = 120;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 121:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			return "MYERROR";
		}
		case 122:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'l')
			{
				state = 121;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 123:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'U')
			{
				state = 121;
				break;
			}
			if (ch == 'u')
			{
				state = 121;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 124:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'U')
			{
				state = 121;
				break;
			}
			if (ch == 'l')
			{
				state = 123;
				break;
			}
			if (ch == 'u')
			{
				state = 121;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 125:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'L')
			{
				state = 126;
				break;
			}
			if (ch == 'l')
			{
				state = 141;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 126:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'L')
			{
				state = 140;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 127:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'L')
			{
				state = 142;
				break;
			}
			if (ch == 'U')
			{
				state = 140;
				break;
			}
			if (ch == 'u')
			{
				state = 140;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 128:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 8;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 129:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 11;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 130:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 15;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 131:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 36;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 132:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 37;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 133:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 60;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 134:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 65;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 135:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 113;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 136:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 114;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 137:
		{
			if (ch == '0')
			{
				state = 139;
				break;
			}
			if (ch == '1')
			{
				state = 139;
				break;
			}
			if (ch == '2')
			{
				state = 139;
				break;
			}
			if (ch == '3')
			{
				state = 139;
				break;
			}
			if (ch == '4')
			{
				state = 139;
				break;
			}
			if (ch == '5')
			{
				state = 139;
				break;
			}
			if (ch == '6')
			{
				state = 139;
				break;
			}
			if (ch == '7')
			{
				state = 139;
				break;
			}
			if (ch == '8')
			{
				state = 139;
				break;
			}
			if (ch == '9')
			{
				state = 139;
				break;
			}
			if (ch == 'A')
			{
				state = 139;
				break;
			}
			if (ch == 'B')
			{
				state = 139;
				break;
			}
			if (ch == 'C')
			{
				state = 139;
				break;
			}
			if (ch == 'D')
			{
				state = 139;
				break;
			}
			if (ch == 'E')
			{
				state = 139;
				break;
			}
			if (ch == 'F')
			{
				state = 139;
				break;
			}
			if (ch == 'a')
			{
				state = 139;
				break;
			}
			if (ch == 'b')
			{
				state = 139;
				break;
			}
			if (ch == 'c')
			{
				state = 139;
				break;
			}
			if (ch == 'd')
			{
				state = 139;
				break;
			}
			if (ch == 'e')
			{
				state = 139;
				break;
			}
			if (ch == 'f')
			{
				state = 139;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 138:
		{
			if (ch == '0')
			{
				state = 139;
				break;
			}
			if (ch == '1')
			{
				state = 139;
				break;
			}
			if (ch == '2')
			{
				state = 139;
				break;
			}
			if (ch == '3')
			{
				state = 139;
				break;
			}
			if (ch == '4')
			{
				state = 139;
				break;
			}
			if (ch == '5')
			{
				state = 139;
				break;
			}
			if (ch == '6')
			{
				state = 139;
				break;
			}
			if (ch == '7')
			{
				state = 139;
				break;
			}
			if (ch == '8')
			{
				state = 139;
				break;
			}
			if (ch == '9')
			{
				state = 139;
				break;
			}
			if (ch == 'A')
			{
				state = 139;
				break;
			}
			if (ch == 'B')
			{
				state = 139;
				break;
			}
			if (ch == 'C')
			{
				state = 139;
				break;
			}
			if (ch == 'D')
			{
				state = 139;
				break;
			}
			if (ch == 'E')
			{
				state = 139;
				break;
			}
			if (ch == 'F')
			{
				state = 139;
				break;
			}
			if (ch == 'P')
			{
				state = 103;
				break;
			}
			if (ch == 'a')
			{
				state = 139;
				break;
			}
			if (ch == 'b')
			{
				state = 139;
				break;
			}
			if (ch == 'c')
			{
				state = 139;
				break;
			}
			if (ch == 'd')
			{
				state = 139;
				break;
			}
			if (ch == 'e')
			{
				state = 139;
				break;
			}
			if (ch == 'f')
			{
				state = 139;
				break;
			}
			if (ch == 'p')
			{
				state = 103;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 139:
		{
			if (ch == '0')
			{
				state = 139;
				break;
			}
			if (ch == '1')
			{
				state = 139;
				break;
			}
			if (ch == '2')
			{
				state = 139;
				break;
			}
			if (ch == '3')
			{
				state = 139;
				break;
			}
			if (ch == '4')
			{
				state = 139;
				break;
			}
			if (ch == '5')
			{
				state = 139;
				break;
			}
			if (ch == '6')
			{
				state = 139;
				break;
			}
			if (ch == '7')
			{
				state = 139;
				break;
			}
			if (ch == '8')
			{
				state = 139;
				break;
			}
			if (ch == '9')
			{
				state = 139;
				break;
			}
			if (ch == 'A')
			{
				state = 139;
				break;
			}
			if (ch == 'B')
			{
				state = 139;
				break;
			}
			if (ch == 'C')
			{
				state = 139;
				break;
			}
			if (ch == 'D')
			{
				state = 139;
				break;
			}
			if (ch == 'E')
			{
				state = 139;
				break;
			}
			if (ch == 'F')
			{
				state = 139;
				break;
			}
			if (ch == 'P')
			{
				state = 104;
				break;
			}
			if (ch == 'a')
			{
				state = 139;
				break;
			}
			if (ch == 'b')
			{
				state = 139;
				break;
			}
			if (ch == 'c')
			{
				state = 139;
				break;
			}
			if (ch == 'd')
			{
				state = 139;
				break;
			}
			if (ch == 'e')
			{
				state = 139;
				break;
			}
			if (ch == 'f')
			{
				state = 139;
				break;
			}
			if (ch == 'p')
			{
				state = 104;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 140:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			return "MYERROR";
		}
		case 141:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'l')
			{
				state = 140;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 142:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'U')
			{
				state = 140;
				break;
			}
			if (ch == 'u')
			{
				state = 140;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 143:
		{
			if (i == yytext.length())
			{
				printf("CONSTANT");
				return"CONSTANT";
			}
			if (ch == 'U')
			{
				state = 140;
				break;
			}
			if (ch == 'l')
			{
				state = 142;
				break;
			}
			if (ch == 'u')
			{
				state = 140;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 144:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 29;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 145:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 33;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 146:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 70;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 179;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 147:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 145;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 148:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 147;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 149:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 148;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 150:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 18;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 151:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 32;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 152:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 151;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 153:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 97;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 154:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 112;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 223;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 155:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 57;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 156:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 155;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 157:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 156;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 158:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 56;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 159:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 131;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 160:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 132;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 161:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 134;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 162:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 161;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 163:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 159;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 164:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 160;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 165:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 164;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 166:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 66;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 167:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 12;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 168:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 25;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 169:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 34;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 170:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 130;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 171:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 135;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 172:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 136;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 173:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 150;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 174:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 171;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 188;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 175:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 172;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 176:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 170;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 177:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 233;
				break;
			}
			if (ch == 'i')
			{
				state = 174;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 222;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 226;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 178:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 175;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 179:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 176;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 16;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 180:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 14;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 181:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 55;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 182:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 248;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 64;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 183:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 144;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 184:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 154;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 185:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 158;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 186:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 169;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 187:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 173;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 188:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 183;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 189:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 186;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 178;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 190:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 189;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 191:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 185;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 192:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 191;
				break;
			}
			if (ch == 'C')
			{
				state = 256;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 265;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 193:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 149;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 194:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 58;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 195:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 68;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 196:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 76;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 197:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 157;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 198:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 167;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 199:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 168;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 200:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 194;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 201:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 196;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 202:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 198;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 203:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 205;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 200;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 239;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 204:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 230;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 195;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 205:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 128;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 206:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 129;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 207:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 206;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 242;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 220;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 208:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 9;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 209:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 13;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 210:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 24;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 211:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 28;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 212:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 31;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 213:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 62;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 214:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 152;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 215:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 153;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 216:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 163;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 217:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 180;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 218:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 181;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 219:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 201;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 220:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 202;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 221:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 209;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 222:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 215;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 245;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 223:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 216;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 224:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 210;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 225:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 212;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 226:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 214;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 227:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 224;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 228:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 213;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 229:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 217;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 230:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 221;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 231:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 211;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 232:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 227;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 233:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 231;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 234:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 208;
				break;
			}
			if (ch == 't')
			{
				state = 250;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 235:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 219;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 236:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 235;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 237:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 236;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 240;
				break;
			}
			if (ch == 't')
			{
				state = 243;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 238:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 237;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 239:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 234;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 240:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 232;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 241:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 133;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 242:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 166;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 243:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 199;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 244:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 218;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 245:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 225;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 246:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 228;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 247:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 246;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 248:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 247;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 249:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 241;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 250:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 249;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 251:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 59;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 252:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 251;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 253:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 252;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 254:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 253;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 255:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 254;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 256:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 255;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 257:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 71;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 258:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 193;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 259:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 257;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 260:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 259;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 261:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 260;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 262:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 261;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 263:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 262;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 264:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 263;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 265:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 264;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		case 266:
		{
			if (i == yytext.length())
			{
				printf("IDENTIFIER");
				return"IDENTIFIER";
			}
			if (ch == '0')
			{
				state = 266;
				break;
			}
			if (ch == '1')
			{
				state = 266;
				break;
			}
			if (ch == '2')
			{
				state = 266;
				break;
			}
			if (ch == '3')
			{
				state = 266;
				break;
			}
			if (ch == '4')
			{
				state = 266;
				break;
			}
			if (ch == '5')
			{
				state = 266;
				break;
			}
			if (ch == '6')
			{
				state = 266;
				break;
			}
			if (ch == '7')
			{
				state = 266;
				break;
			}
			if (ch == '8')
			{
				state = 266;
				break;
			}
			if (ch == '9')
			{
				state = 266;
				break;
			}
			if (ch == 'A')
			{
				state = 266;
				break;
			}
			if (ch == 'B')
			{
				state = 266;
				break;
			}
			if (ch == 'C')
			{
				state = 266;
				break;
			}
			if (ch == 'D')
			{
				state = 266;
				break;
			}
			if (ch == 'E')
			{
				state = 266;
				break;
			}
			if (ch == 'F')
			{
				state = 266;
				break;
			}
			if (ch == 'G')
			{
				state = 266;
				break;
			}
			if (ch == 'H')
			{
				state = 266;
				break;
			}
			if (ch == 'I')
			{
				state = 266;
				break;
			}
			if (ch == 'J')
			{
				state = 266;
				break;
			}
			if (ch == 'K')
			{
				state = 266;
				break;
			}
			if (ch == 'L')
			{
				state = 266;
				break;
			}
			if (ch == 'M')
			{
				state = 266;
				break;
			}
			if (ch == 'N')
			{
				state = 266;
				break;
			}
			if (ch == 'O')
			{
				state = 266;
				break;
			}
			if (ch == 'P')
			{
				state = 266;
				break;
			}
			if (ch == 'Q')
			{
				state = 266;
				break;
			}
			if (ch == 'R')
			{
				state = 266;
				break;
			}
			if (ch == 'S')
			{
				state = 266;
				break;
			}
			if (ch == 'T')
			{
				state = 266;
				break;
			}
			if (ch == 'U')
			{
				state = 266;
				break;
			}
			if (ch == 'V')
			{
				state = 266;
				break;
			}
			if (ch == 'W')
			{
				state = 266;
				break;
			}
			if (ch == 'X')
			{
				state = 266;
				break;
			}
			if (ch == 'Y')
			{
				state = 266;
				break;
			}
			if (ch == 'Z')
			{
				state = 266;
				break;
			}
			if (ch == '_')
			{
				state = 266;
				break;
			}
			if (ch == 'a')
			{
				state = 266;
				break;
			}
			if (ch == 'b')
			{
				state = 266;
				break;
			}
			if (ch == 'c')
			{
				state = 266;
				break;
			}
			if (ch == 'd')
			{
				state = 266;
				break;
			}
			if (ch == 'e')
			{
				state = 266;
				break;
			}
			if (ch == 'f')
			{
				state = 266;
				break;
			}
			if (ch == 'g')
			{
				state = 266;
				break;
			}
			if (ch == 'h')
			{
				state = 266;
				break;
			}
			if (ch == 'i')
			{
				state = 266;
				break;
			}
			if (ch == 'j')
			{
				state = 266;
				break;
			}
			if (ch == 'k')
			{
				state = 266;
				break;
			}
			if (ch == 'l')
			{
				state = 266;
				break;
			}
			if (ch == 'm')
			{
				state = 266;
				break;
			}
			if (ch == 'n')
			{
				state = 266;
				break;
			}
			if (ch == 'o')
			{
				state = 266;
				break;
			}
			if (ch == 'p')
			{
				state = 266;
				break;
			}
			if (ch == 'q')
			{
				state = 266;
				break;
			}
			if (ch == 'r')
			{
				state = 266;
				break;
			}
			if (ch == 's')
			{
				state = 266;
				break;
			}
			if (ch == 't')
			{
				state = 266;
				break;
			}
			if (ch == 'u')
			{
				state = 266;
				break;
			}
			if (ch == 'v')
			{
				state = 266;
				break;
			}
			if (ch == 'w')
			{
				state = 266;
				break;
			}
			if (ch == 'x')
			{
				state = 266;
				break;
			}
			if (ch == 'y')
			{
				state = 266;
				break;
			}
			if (ch == 'z')
			{
				state = 266;
				break;
			}
			else
			{
				return "MYERROR";
			}
			return "MYERROR";
		}
		default:
			return "MYERROR";
		}
		if (i < yytext.length() - 1)
			ch = yytext[++i];
		else
			++i;
	}

}
int main() {
	string s;
	//cin >> s;
	ofstream ofile;
	ifstream ifile;
	ifile.open("a.txt", ios::out);
	ofile.open("tokens.txt", ios::out);
	char c;
	s = "";
	c = ifile.get();
	while (c == ' ' || c == '\n')
		c = ifile.get();
	while (c != '#') {
		bool flag = false;
		while (c == ' ' || c == '\n')
		{
			c = ifile.get();
			flag = true;
		}
		if (!flag)
			s.append(1, c);
		cout << "current token is " << s << endl;
		string h = analysis(s);
		if (h == "MYERROR")
		{
			//最长匹配不意味着只消除最后一个
			while (h == "MYERROR")
			{
				s.pop_back();
				ifile.seekg(-1, ios::cur);
				h = analysis(s);
			}
			ofile << s << '\t' << h << '\n';
			s = "";
		}
		else if (h != "MYERROR" && flag)
		{
			ofile << s << '\t' << h << '\n';
			s = "";
			ifile.seekg(-1, ios::cur);
		}
		c = ifile.get();
	}
	ifile.close();
	ofile.close();

	return 0;
}