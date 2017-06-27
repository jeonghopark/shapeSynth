#pragma once

#include "ofMain.h"
#include "SpectrumDrawer.h"
#include "PlayerHead.h"
#include "ofxGui.h"


#define BUFFER_SIZE 8192
#define SAMPLE_RATE 44100
#define INITIAL_BUFFER_SIZE 512
#define BIT 512

class ofApp : public ofBaseApp{
    
public:
    
    void setup();
    void update();
    void draw();
    void close();
    void exit();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    
    void dragEvent(ofDragInfo info);
    
    void audioReceived (float * input, int bufferSize, int nChannels);
    void audioOut(ofSoundBuffer & buffer);
    
    ofSoundStream soundStream;
    
    //    void openFile(string URL="");
    
    float line;
    
    int	maxHertz;
    
    
    float remainder;
    float wave;
    
    double sineBuffer[514];
    float outp[INITIAL_BUFFER_SIZE];
    float amp[BIT];
    int hertzScale[BIT];
    float phases[BIT];
    
    
    SpectrumDrawer spectrum;
    PlayerHead playerHead;
    
    void guiSetting();
    ofxPanel gui;
    ofxFloatSlider speed;
    //    ofxButton openf;
    ofxButton openm;
    ofxToggle invert;
    ofxToggle square;
    ofxFloatSlider maxHz;
    ofxFloatSlider minHz;
    ofxFloatSlider lineSize;
    //    ofxToggle reset;
    //    ofxToggle imageFormat;
    ofxButton modelSelect;
    ofxButton returnZero;
    //    ofxToggle pointView;
    ofxToggle imageProcessView;
    
    ofxToggle errorMath;
    ofxIntSlider errorLength;
    ofxFloatSlider fadeLength;
    
    //    ofxFloatSlider maxZDepth;
    //    ofxFloatSlider minZDepth;
    //    ofxToggle zDepthShape;
    
    //    ofxIntSlider brightness;
    ofxIntSlider volume;
    ofxLabel frameRate;
    
    bool bGuiView;
    
    
    //3D Model
    ofEasyCam cam;
    
    int numPoint;
    
    int modelIndex;
    
    ofTexture texScreen;
    ofRectangle captureRect;
    ofImage captureImage;
    ofTexture texProcessScreen;
    ofImage captureProcessImage;
    ofRectangle captureProcessRect;
    
    bool imageProcessCapture;
    
    ofMatrix4x4 setMatrix;
    
    //    void imageFormatButtonClick(bool &_b);
    
    int captureH, captureW;
    
    void loadCapture(ofImage _img);
    void imageCapture();
    
    
    

    void errorLengthChanged(int & _m);
    void guiButton(bool & _b);
    
    bool bImageProcessView;
    
    
    
    //
    void drawVolumeLine();
    
    
    float processScreenWidth, processScreenHeight;
    float screenWidth, screenHeight;
    
    
    //
    ofFbo shapesFbo;
    void generateShapeFbo();
    
};
