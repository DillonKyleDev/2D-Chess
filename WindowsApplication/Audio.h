#pragma once
#include "Sound.h"
#include "Component.h"



namespace FlatEngine
{
	class Audio : public Component
	{
	public:
		Audio(long myID = -1, long parentID = -1);
		~Audio();

		void LoadMusic(std::string path);
		void LoadEffect(std::string path);
		void SetPath(std::string path);
		std::string GetPath();
		void SetIsMusic(bool _isMusic);
		bool IsMusic();
		void Play(int channel = -1);
		void Pause(int channel = -1);
		void Stop(int channel = -1);
		bool IsMusicPlaying();
		std::string GetData();

	private:
		std::shared_ptr<Sound> sound;
		std::string path;
		bool _isMusic;
	};
}
