#pragma once
#include "texture.h"
#include <vlc\libvlc.h>
#include <vlc\libvlc_media.h>
#include <vlc\libvlc_media_player.h>
#include <mutex>
struct videoContext
{
	libvlc_instance_t* instance;
	libvlc_media_t* media;
	libvlc_media_player_t* player;
	unsigned char *pixeldata;
	unsigned char currentFrame;
	int width;
	int height;
	int duration;
	int time;
	int volume;
};

void destroyVideo(videoContext* context);
videoContext* initVideo(const char* fileName);
void setTime(videoContext* context, long time);
void setVolume(videoContext* context, int volume);
void playPause(videoContext* context);