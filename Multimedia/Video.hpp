#pragma once
#include "Multimedia.hpp"
#include "Audio.hpp"
#include <vector>
class Video : public Multimedia
{
private:
	std::vector<Audio*> audio;
	std::string subtitles;
public:

	Video();
	Video(std::string, unsigned, std::string, std::string);

	void addAudio(const Audio&);
	void print_debug_state() const;

	~Video();
};

