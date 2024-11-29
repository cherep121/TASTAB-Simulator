#pragma once

class ViewIFstream
{
public:
	ViewIFstream();

	void open(const char* p);
	bool is_open();
	void read(char* b, long long s);
	void close();

	~ViewIFstream();
private:
	char dat[272];
};

class ViewOFstream
{
public:
	ViewOFstream();

	void open(const char* p);
	bool is_open();
	void write(const char* b, long long s);
	void close();

	~ViewOFstream();
private:
	char dat[264];
};