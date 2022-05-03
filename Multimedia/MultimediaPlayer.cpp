#include "MultimediaPlayer.hpp"

void MultimediaPlayer::addAudio(const Audio& audio)
{
	multimedia.push_back(new Audio(audio));
}

void MultimediaPlayer::addVideo(const Video& video)
{
	multimedia.push_back(new Video(video));
}

void MultimediaPlayer::addStreaming(const Streaming& streaming)
{
	multimedia.push_back(new Streaming(streaming));
}

void MultimediaPlayer::removeMultimedia(const Multimedia& multi)
{
	for (int i = 0; i < multimedia.size(); i++)
	{
		if (multimedia[i] == &multi)
		{
			multimedia.erase(multimedia.begin() + i);
			break;
		}
	}
}

void MultimediaPlayer::print_all_files_states(const unsigned position)
{

	Audio* ptrAudio = dynamic_cast<Audio*>(multimedia[position]);
	if (ptrAudio)
	{

	}
}
