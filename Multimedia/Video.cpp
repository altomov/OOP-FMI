#include <iostream>
#include "Video.hpp"

Video::Video()
{
}

Video::Video(std::string name, unsigned size, std::string extension, std::string subtitles)
{
	this->name = name;
	this->size = size;
	this->extension = extension;
	this->subtitles = subtitles;
}

void Video::addAudio(const Audio& other)
{
	audio.push_back(new Audio(other));
}

void Video::print_debug_state() const
{
	std::cout << name << " " << size << " " << extension << " " << subtitles << " " << std::endl;
	for (size_t i = 0; i < audio.size(); i++)
	{
		this->audio[i]->print_debug_state();
	}
}

Video::~Video()
{
	for (int i = 0; i < audio.size(); i++)
	{
		delete audio[i];
	}
}
