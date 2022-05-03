#pragma once
#include "Multimedia.hpp"
#include <vector>
#include "Audio.hpp"
#include "Video.hpp"
#include "Streaming.hpp"

class MultimediaPlayer
{
private:
	std::vector<Multimedia*> multimedia;
public:
	void addAudio(const Audio&);
	void addVideo(const Video&);
	void addStreaming(const Streaming&);

	void removeMultimedia(const Multimedia&);

	void print_all_files_states(const unsigned position);
};

