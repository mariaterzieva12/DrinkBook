#include<iostream>
#include<cstring>

class String
{
private:
	char* str;
	int len;
	void CopyFrom(const String& other);
	void Free();
public:
	String();
	String(const char* str);
	String(const String& other);
	String& operator=(const String& other);
	~String();
	String& operator+=(const String& other);
	const char* getString() const;
};

String::String()
{
	str = new char[1];
	str[0] = '/0';
	len = 1;
}

String::String(const char* str)
{
	len = strlen(str);
	this->str = new char[len + 1];
	strcpy(this->str, str);
}

String::String(const String& other)
{
	CopyFrom(other);
}

String& String::operator=(const String& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);
	}
	return *this;
}
String::~String()
{
	Free();
}
void String::CopyFrom(const String& other)
{
	str = new char[other.len + 1];
	strcpy(str, other.str);
	len = other.len;
}
void String::Free()
{
	delete[] str;
}

String& String::operator+=(const String& other)
{
	char* temp = new char[len + other.len + 1];
	for (int i = 0; i < len; i++)
		temp[i] = str[i];
	for (int i = 0; i < other.len; i++)
		temp[len + i] = other.str[i];
	temp[len + other.len] = '\0';
	delete[] str;
	str = temp;
	len += other.len;
	return *this;
}

String operator+(const String& lhs, const String& rhs)
{
	String temp(lhs);
	temp += rhs;
	return temp;
}

const char* String::getString() const
{
	return str;
}
