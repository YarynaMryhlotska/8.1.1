#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
bool Include(const char* str, const char c, const char k)
{
	for (int i = 0; str[i] != '\0'; i++)
		if ((c == str[i] && k == str[i + 1])
			|| (k == str[i] && c == str[i + 1]))
			return 1;
	return 0;
}
char* Change(char* str)
{
	size_t len = strlen(str);
	if (len < 3)
		return str;
	char* tmp = new char[len * 4 / 3 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;
		while (i < len && str[i + 1] != 0)
		{
			if ((str[i] == 'Q' && str[i + 1] == 'S')
|| (str[i] == 'S' && str[i + 1] == 'Q'))
			{
				strcat(t, "***");
				t += 3;
				i += 2;
			}
			else
			{
				*t++ = str[i++];
				*t = '\0';
			}
		}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	char k = 'Q';
	char c = 'S';
	if (Include(str, c, k))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	char* dest = new char[151];
	dest = Change(str); 
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
