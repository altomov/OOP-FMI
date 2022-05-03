#include "KeyValueDatabase.hpp"
#include <string>
#include <stdexcept>
#include <sstream>

KeyValueDatabase::KeyValueDatabase(const std::string& name, const std::string& location, const std::string& extension) : Object(name, location, extension) {}

void KeyValueDatabase::add_entry(const std::pair<std::string, int>& entry)
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].first == entry.first)
		{
			throw std::invalid_argument("");
		}
	}
	pairs.push_back(entry);
}

int KeyValueDatabase::get_value(const std::string& key) const
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].first == key)
		{
			return pairs[i].second;
		}
	}
	throw std::invalid_argument("");
}

std::string KeyValueDatabase::to_string() const
{
	std::string after = "";
	after += name + '\n' + location + '\n' + extension + '\n';
	for (size_t i = 0; i < pairs.size(); i++)
	{
		after += pairs[i].first + ':' + std::to_string(pairs[i].second) + '\n';
	}
	return after;
}

void KeyValueDatabase::from_string(const std::string& newString) 
{
	std::istringstream str(newString);
	getline(str, name);
	getline(str, location);
	getline(str, extension);
	std::string line;

	while (getline(str, line))
	{
		if (line != "")
		{

			std::string key;
			size_t j = 0;

			while (line[j++] != ':')
			{
				key.push_back(line[j-1]);
			}
			std::pair<std::string, int> helppair;
			helppair.first = key;

			helppair.second = std::stoi(line.substr(j, line.length() - j));

			pairs.push_back(helppair);
		}

	}
}

std::string KeyValueDatabase::debug_print() const
{
	std::string debug = "";

	for (size_t i = 0; i < pairs.size(); i++)
	{
		debug += "{" + pairs[i].first + ":" + std::to_string(pairs[i].second) + "}" + "\n";
	}
	return debug;
}

Object* KeyValueDatabase::clone() const
{
	KeyValueDatabase* ptrKeyValue = new KeyValueDatabase(name, location, extension);

	for (size_t i = 0; i < pairs.size(); i++)
	{
		ptrKeyValue->pairs.push_back(pairs[i]);
	}
	return (Object*)ptrKeyValue;
}

bool KeyValueDatabase::operator==(const Comparable* comparable) const
{
	if (typeid(KeyValueDatabase) != typeid(*comparable))
	{
		return false;
	}

	Comparable* ptrComparable = const_cast<Comparable*>(comparable);

	KeyValueDatabase* ptrKeyValue = dynamic_cast<KeyValueDatabase*>(ptrComparable);

	if (ptrKeyValue->pairs.size() != pairs.size())
	{
		return false;
	}

	if (ptrKeyValue->pairs.size() != pairs.size())
	{
		return false;
	}
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if ((pairs[i].first != ptrKeyValue->pairs[i].first) || (pairs[i].second != ptrKeyValue->pairs[i].second))
		{
			return false;
		}
	}
	return true;
}

bool KeyValueDatabase::operator!=(const Comparable* comparable) const
{
	return !(this == comparable);
}
