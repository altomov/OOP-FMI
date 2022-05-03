#include "Document.hpp"
#include <stdexcept>
#include <vector>
#include <string>
#include <sstream>

Document::Document(const std::string& name, const std::string& location, const std::string& extension) 
	:Object(name, location, extension) {
	cursor = 0;
}

void Document::write_line(const std::string& line)
{
	lines.push_back(line);
}

std::string Document::read_line()
{
	if (cursor >= lines.size())
	{
		throw std::out_of_range("");
	}
	cursor++;
	return lines[cursor-1];
}

std::string Document::read_line(const unsigned line)
{
	if (line > lines.size() || line <= 0)
	{
		throw std::out_of_range("");
	}	
	cursor = line;
	return lines[cursor-1];
}

bool Document::operator==(const Comparable* other) const
{
	if (typeid(Document) != typeid(*other))
	{
		return false;
	}

	Comparable* ptrComparable = const_cast<Comparable*>(other);

	Document* ptrDocument = dynamic_cast<Document*>(ptrComparable);

	if (ptrDocument->lines.size() != lines.size())
	{
		return false;
	}
	for (size_t i = 0; i < lines.size(); i++)
	{
		if (lines[i] != ptrDocument->lines[i])
		{
			return false;
		}
	}
	return true;
}

bool Document::operator!=(const Comparable* comparable) const
{
	return !(this == comparable);
}

std::string Document::to_string() const
{
	std::string after;
	after+= name + "\n";
	after+= location + "\n";
	after+= extension + "\n";

	for (size_t i = 0; i < lines.size(); i++)
	{
		after += lines[i] + '\n';
	}
	return after;
}

void Document::from_string(const std::string& newString)
{
	std::istringstream str(newString);
	std::string line;

	getline(str, name);
	getline(str, location);
	getline(str, extension);
	while (getline(str, line))
	{
		lines.push_back(line);
	}
}

size_t Document::getCursor() const
{
	return cursor;
}

std::string Document::debug_print() const
{
	
	std::string debug = "";

	for (size_t i = 0; i < lines.size(); i++)
	{
		debug += "Line " + std::to_string(i + 1) + ":" + lines[i] + "\n";
	}
	return debug;
}

void Document::setCursor(const size_t newCursor)
{
	cursor = newCursor;
}

Object* Document::clone() const
{
	Document* ptrDocument = new Document(name, location, extension);
	for (size_t i = 0; i < lines.size(); i++)
	{
		ptrDocument->lines.push_back(lines[i]);
	}
	return (Object*)ptrDocument;
}
