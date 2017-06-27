#ifndef SPECTRUMDRAWER
#define SPECTRUMDRAWER

#define BIT 512

#include "ofMain.h"

class SpectrumDrawer{
public:

    SpectrumDrawer();
    
    void setup(int _minHz, int _maxHz);
	void update();
	void setPixel(int x,int y, float r, float g, float b);
	void setSize(int _w, int _h);
	
	void reloadTexture(int mode);
	void loadImageSpectrum(string target);
    void loadImageSpectrum(ofImage _img);
	void loadMusic(string target);
	void addSpectrum(float* buffer);
	
	void play();
	void pause();
	void stop();
	void clear();
	
	float getPixel(int x, int y);
	float getAmp(float x, float y);
	float getFreq(float y);
	
	int width;
	int height;
	int minHz;
	int maxHz;
	int offsetX;
	int offsetY;
	
	int counter;
	
	bool invert;
	bool square;
	bool playing;
	bool loadedMusicPlaying;
	
	float pixels[10000][BIT-1];
	float speed;
	float player;
	float ratio;
	float ratio2;
	
	GLuint texture1; 
	GLubyte image[10000][512][3];
	ofImage spectrumLoader;
	
    ofImage spectrumCaptureLoader;
	
	//ofxTiledTexture spectrumTexture;
	
	ofTrueTypeFont 	hertZ;
};
#endif