#include <iostream>
#include <string>

class String
{
	char * m_str;
public:
	String()
	{
		m_str = NULL;
	}

	String(const char* pStr)
	{
		m_str = new char[strlen(pStr)];
		strcpy(m_str, pStr);
	}
	int Len() const
	{
		return m_str ? strlen(m_str) : 0;
	}
	~String()
	{
		delete m_str;
	}
};

void main(void)
{
	String spd;
}