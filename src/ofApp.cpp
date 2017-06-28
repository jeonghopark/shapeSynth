#include "ofApp.h"

float sines[514]={0,0.012268,0.024536,0.036804,0.049042,0.06131,0.073547,0.085785,0.097992,0.1102,0.12241,0.13455,0.1467,0.15884,0.17093,0.18301,0.19507,0.20709,0.21909,0.23105,0.24295,0.25485,0.26669,0.2785,0.29025,0.30197,0.31366,0.32529,0.33685,0.34839,0.35986,0.37128,0.38266,0.39395,0.40521,0.41641,0.42752,0.4386,0.44958,0.46051,0.47137,0.48215,0.49286,0.50351,0.51407,0.52457,0.53497,0.54529,0.55554,0.5657,0.57578,0.58575,0.59567,0.60547,0.6152,0.62482,0.63437,0.6438,0.65314,0.66238,0.67151,0.68057,0.68951,0.69833,0.70706,0.7157,0.72421,0.7326,0.74091,0.74908,0.75717,0.76514,0.77298,0.7807,0.7883,0.79581,0.80316,0.81042,0.81754,0.82455,0.83142,0.8382,0.84482,0.85132,0.8577,0.86392,0.87006,0.87604,0.88187,0.8876,0.89319,0.89862,0.90396,0.90912,0.91415,0.91907,0.92383,0.92847,0.93295,0.93729,0.9415,0.94556,0.94949,0.95325,0.95691,0.96039,0.96375,0.96692,0.97,0.9729,0.97565,0.97827,0.98074,0.98306,0.98523,0.98724,0.98914,0.99084,0.99243,0.99387,0.99515,0.99628,0.99725,0.99808,0.99875,0.99927,0.99966,0.99988,0.99997,0.99988,0.99966,0.99927,0.99875,0.99808,0.99725,0.99628,0.99515,0.99387,0.99243,0.99084,0.98914,0.98724,0.98523,0.98306,0.98074,0.97827,0.97565,0.9729,0.97,0.96692,0.96375,0.96039,0.95691,0.95325,0.94949,0.94556,0.9415,0.93729,0.93295,0.92847,0.92383,0.91907,0.91415,0.90912,0.90396,0.89862,0.89319,0.8876,0.88187,0.87604,0.87006,0.86392,0.8577,0.85132,0.84482,0.8382,0.83142,0.82455,0.81754,0.81042,0.80316,0.79581,0.7883,0.7807,0.77298,0.76514,0.75717,0.74908,0.74091,0.7326,0.72421,0.7157,0.70706,0.69833,0.68951,0.68057,0.67151,0.66238,0.65314,0.6438,0.63437,0.62482,0.6152,0.60547,0.59567,0.58575,0.57578,0.5657,0.55554,0.54529,0.53497,0.52457,0.51407,0.50351,0.49286,0.48215,0.47137,0.46051,0.44958,0.4386,0.42752,0.41641,0.40521,0.39395,0.38266,0.37128,0.35986,0.34839,0.33685,0.32529,0.31366,0.30197,0.29025,0.2785,0.26669,0.25485,0.24295,0.23105,0.21909,0.20709,0.19507,0.18301,0.17093,0.15884,0.1467,0.13455,0.12241,0.1102,0.097992,0.085785,0.073547,0.06131,0.049042,0.036804,0.024536,0.012268,0,-0.012268,-0.024536,-0.036804,-0.049042,-0.06131,-0.073547,-0.085785,-0.097992,-0.1102,-0.12241,-0.13455,-0.1467,-0.15884,-0.17093,-0.18301,-0.19507,-0.20709,-0.21909,-0.23105,-0.24295,-0.25485,-0.26669,-0.2785,-0.29025,-0.30197,-0.31366,-0.32529,-0.33685,-0.34839,-0.35986,-0.37128,-0.38266,-0.39395,-0.40521,-0.41641,-0.42752,-0.4386,-0.44958,-0.46051,-0.47137,-0.48215,-0.49286,-0.50351,-0.51407,-0.52457,-0.53497,-0.54529,-0.55554,-0.5657,-0.57578,-0.58575,-0.59567,-0.60547,-0.6152,-0.62482,-0.63437,-0.6438,-0.65314,-0.66238,-0.67151,-0.68057,-0.68951,-0.69833,-0.70706,-0.7157,-0.72421,-0.7326,-0.74091,-0.74908,-0.75717,-0.76514,-0.77298,-0.7807,-0.7883,-0.79581,-0.80316,-0.81042,-0.81754,-0.82455,-0.83142,-0.8382,-0.84482,-0.85132,-0.8577,-0.86392,-0.87006,-0.87604,-0.88187,-0.8876,-0.89319,-0.89862,-0.90396,-0.90912,-0.91415,-0.91907,-0.92383,-0.92847,-0.93295,-0.93729,-0.9415,-0.94556,-0.94949,-0.95325,-0.95691,-0.96039,-0.96375,-0.96692,-0.97,-0.9729,-0.97565,-0.97827,-0.98074,-0.98306,-0.98523,-0.98724,-0.98914,-0.99084,-0.99243,-0.99387,-0.99515,-0.99628,-0.99725,-0.99808,-0.99875,-0.99927,-0.99966,-0.99988,-0.99997,-0.99988,-0.99966,-0.99927,-0.99875,-0.99808,-0.99725,-0.99628,-0.99515,-0.99387,-0.99243,-0.99084,-0.98914,-0.98724,-0.98523,-0.98306,-0.98074,-0.97827,-0.97565,-0.9729,-0.97,-0.96692,-0.96375,-0.96039,-0.95691,-0.95325,-0.94949,-0.94556,-0.9415,-0.93729,-0.93295,-0.92847,-0.92383,-0.91907,-0.91415,-0.90912,-0.90396,-0.89862,-0.89319,-0.8876,-0.88187,-0.87604,-0.87006,-0.86392,-0.8577,-0.85132,-0.84482,-0.8382,-0.83142,-0.82455,-0.81754,-0.81042,-0.80316,-0.79581,-0.7883,-0.7807,-0.77298,-0.76514,-0.75717,-0.74908,-0.74091,-0.7326,-0.72421,-0.7157,-0.70706,-0.69833,-0.68951,-0.68057,-0.67151,-0.66238,-0.65314,-0.6438,-0.63437,-0.62482,-0.6152,-0.60547,-0.59567,-0.58575,-0.57578,-0.5657,-0.55554,-0.54529,-0.53497,-0.52457,-0.51407,-0.50351,-0.49286,-0.48215,-0.47137,-0.46051,-0.44958,-0.4386,-0.42752,-0.41641,-0.40521,-0.39395,-0.38266,-0.37128,-0.35986,-0.34839,-0.33685,-0.32529,-0.31366,-0.30197,-0.29025,-0.2785,-0.26669,-0.25485,-0.24295,-0.23105,-0.21909,-0.20709,-0.19507,-0.18301,-0.17093,-0.15884,-0.1467,-0.13455,-0.12241,-0.1102,-0.097992,-0.085785,-0.073547,-0.06131,-0.049042,-0.036804,-0.024536,-0.012268,0,0.012268
};



//--------------------------------------------------------------
void ofApp::setup(){
    
    //#ifdef DEBUG
    //
    //#else
    //    ofSetDataPathRoot("../Resources/data");
    //#endif
    
    ofEnableAlphaBlending();
    ofEnableDepthTest();
    ofSetupScreen();
    ofSetFrameRate(60);
    
    ofBackground(0);
    
    ofDisableArbTex();
    
    ofEnablePointSprites();
    
    processScreenWidth = 1280;
    processScreenHeight = 512;
    screenWidth = processScreenWidth;
    screenHeight = processScreenHeight;
    
    
    shapesFbo.allocate(processScreenWidth, processScreenHeight, GL_RGB);
    generateShapeFbo();
    
    
    
    cam.setAutoDistance(false);
    cam.setDistance(10);
    cam.setFarClip(0);
    
    
    captureW = processScreenWidth;
    captureH = processScreenHeight;
    
    
    line = 0;
    
    for (int i=0; i<514; i++) {
        sineBuffer[i] = sines[i];
    }
    
    
    for (int i=0; i<INITIAL_BUFFER_SIZE ; i++) {
        outp[i] = 0;
    }
    
    
    for (int i=0; i<BIT ; i++) {
        amp[i] = 0;
        hertzScale[i] = 0;
        phases[i] = 0;
    }
    
    maxHertz = 6000;
    spectrum.setup( 1, maxHertz );
    
    auto devices = soundStream.getMatchingDevices("default");
    ofSoundStreamSettings settings;
    //    auto devices = soundStream.getDeviceList();
    if (!devices.empty()) {
        settings.setOutDevice(devices[1]);
    }
    settings.setOutListener(this);
    settings.bufferSize = INITIAL_BUFFER_SIZE;
    settings.sampleRate = SAMPLE_RATE;
    settings.numInputChannels = 0;
    settings.numOutputChannels = 2;
    soundStream.setup(settings);
    
    
    gui.setup();
    guiSetting();
    
    bGuiView = true;
    
    
}






//--------------------------------------------------------------
void ofApp::exit(){
    
}



//--------------------------------------------------------------
void ofApp::update(){
    
    
    spectrum.speed = speed;
    spectrum.maxHz = maxHz;
    spectrum.minHz = minHz;
    line = lineSize;
    
    
    if (spectrum.playing) {
        playerHead.x1 += speed;
        playerHead.x2 += speed;
        
        if (playerHead.x1 > processScreenWidth){
            playerHead.x1 = 0;
            playerHead.x2 = 0;
        }
    }
    
    
    if (returnZero) {
        playerHead.x1 = 0;
        playerHead.x2 = 0;
    }
    
    
    frameRate = ofToString(ofGetFrameRate(), 1);
    
    
    shapesFbo.draw(0, 0);
    
    
}







//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofPushMatrix();
    
    float _x = (screenWidth - processScreenWidth) * 0.5;
    float _y = (screenHeight - processScreenHeight) * 0.5;
    ofTranslate(_x, _y);
    
    ofPushMatrix();
    
    
    spectrum.update();
    
    shapesFbo.draw(0, 0);
    
    
    playerHead.drawPlayHead();
    
    ofPopMatrix();
    
    
    drawVolumeLine();
    
    
    ofPopMatrix();
    
    if (bGuiView) {
        ofDisablePointSprites();
        ofDisableDepthTest();
        gui.draw();
    }
    
    
}



//--------------------------------------------------------------
void ofApp::drawVolumeLine(){
    
    ofPushMatrix();
    ofTranslate(playerHead.x1, 0);
    
    ofPushStyle();
    ofSetColor(255, 255, 255, 100);
    
    if ( spectrum.playing ) {
        
        vector< pair <float, float> > points = playerHead.getPoints(BIT);
        
        for(int n = 0; n<BIT; n++){
            amp[n] = (amp[n]*line + spectrum.getAmp(points[n].first, points[n].second))/(line+1);
            hertzScale[n] = int(spectrum.getFreq(points[n].second));
            
            //            float a = (outp[n]-outp[n+1]);
            //            if (a > .5 or a < - .5) {
            //                ofSetColor(255, 0, 0,255);
            //            }else {
            //                ofSetColor(255, 255, 255,255);
            //            }
            //                        if (n<INITIAL_BUFFER_SIZE) {
            //                            ofLine(n*2,outp[n]*10.0 + 20 + 532 ,n*2+2,outp[n+1]*10.0 + 20 + 532);
            //                        }
            //            ofRect(n*1,0 + 532, 1, amp[n]*10.0);
            
            //            ofDrawRectangle( 0, n * 1, amp[n] * 100.0, 1 );
            //            ofDrawRectangle( 0, n * 1, amp[n] * 100.0, 1 );
            
            float _levelSize = 120;
            ofDrawLine( 0, n * 1, amp[n] * _levelSize, n * 1 );
            ofDrawLine( 0, n * 1, -amp[n] * _levelSize, n * 1 );
            
        }
        
        
    }
    
    ofPopStyle();
    
    ofPopMatrix();
    
}





//--------------------------------------------------------------
void ofApp::imageCapture(){
    
    ofPixels _p;
    
    ofImage _buffImg;
    _buffImg.allocate(captureW, captureH, OF_IMAGE_COLOR);
    
    shapesFbo.readToPixels(_p);
    _buffImg.setFromPixels(_p.getData(), _p.getWidth(), _p.getHeight(), OF_IMAGE_COLOR);
    spectrum.loadImageSpectrum(_buffImg);
    
}





//--------------------------------------------------------------
void ofApp::audioReceived(float * input, int bufferSize, int nChannels){
    
}




//--------------------------------------------------------------
void ofApp::audioOut(ofSoundBuffer & buffer){
    
    if(spectrum.playing){
        
        //        float *ptr = output;
        
        for (int i = 0; i < buffer.getNumFrames(); i++){
            
            wave = 0.0;
            
            for(int n=0; n<BIT; n++){
                
                if (amp[n]>0.00001) {
                    phases[n] += 512./(44100.0/(hertzScale[n]));
                    
                    if ( phases[n] >= 511 ) phases[n] -=512;
                    if ( phases[n] < 0 ) phases[n] = 0;
                    
                    //remainder = phases[n] - floor(phases[n]);
                    //wave+=(float) ((1-remainder) * sineBuffer[1+ (long) phases[n]] + remainder * sineBuffer[2+(long) phases[n]])*amp[n];
                    
                    wave += ( sineBuffer[1 + (long) phases[n]] ) * amp[n];
                }
            }
            
            wave/=10.0;
            if(wave>1.0) wave=1.0;
            if(wave<-1.0) wave=-1.0;
            
            buffer[i * buffer.getNumChannels()    ] = wave * volume;
            buffer[i * buffer.getNumChannels() + 1] = wave * volume;
            //            outp[i] = wave;
            //            *ptr++ = wave * volume;
            
        }
        
        
    } else {
        //        for (int i = 0; i < bufferSize; i++){
        //            output[i*nChannels    ] = 0;
        //            output[i*nChannels + 1] = 0;
        //            outp[i] = 0;
        //        }
    }
    
    
    
}


//--------------------------------------------------------------
void ofApp::loadCapture(ofImage _img){
    
    spectrum.pause();
    spectrum.loadImageSpectrum(_img);
    
}



//--------------------------------------------------------------
void ofApp::guiSetting(){
    
    gui.setPosition( ofGetWidth() - 230, 10 );
    gui.add(frameRate.setup("FrameRate", " "));
    //    gui.add(modelSelect.setup("Model Select"));
    gui.add(speed.setup("speed", 1.0, 0.0, 10.0) );
    //    gui.add(openf.setup( "Open Picture", false) );
    gui.add(maxHz.setup( "Spectrum Max HZ", 5000, 300.0, 8000.0) );
    gui.add(minHz.setup( "Spectrum Min HZ", 50, 1.0, 200.0) );
    gui.add(lineSize.setup( "LINE", 5.0, 0.0, 20.0) );
    //    gui.add(reset.setup("Reset!", ""));
    //    gui.add(imageFormat.setup("Image Format Quad/Land", true) );
    gui.add(returnZero.setup("Return Zero"));
    //    gui.add(pointView.setup("Point Cloud", true));
    //    gui.add(maxZDepth.setup( "Max zDepth", 1.0, 0.0, 10.0) );
    //    gui.add(minZDepth.setup( "Min zDepth", 0.0, -10.0, 10.0) );
    //    gui.add(zDepthShape.setup("zDepth Shape", false));
    //    gui.add(brightness.setup("PointBright", 120, 0, 255));
    //    gui.add(imageProcessView.setup("ImageProcess", false));
    //    gui.add(errorMath.setup("error", true));
    //    gui.add(errorLength.setup("ErrorLength", 20, 2, 50));
    //    gui.add(fadeLength.setup("FadeLength", 0, 0, 0.1));
    gui.add(volume.setup("Volume", 2, 0, 5));
    
    
    imageProcessView.addListener(this, &ofApp::guiButton);
    errorLength.addListener(this, &ofApp::errorLengthChanged);
    
}




//--------------------------------------------------------------
void ofApp::errorLengthChanged(int & _m){
    
    imageCapture();
    
}


//--------------------------------------------------------------
void ofApp::guiButton(bool & _b){
    
    imageCapture();
}




//--------------------------------------------------------------
void ofApp::close() {
    
    spectrum.pause();
    spectrum.stop();
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}


//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    
    switch (key) {
            
        case 'c':
            generateShapeFbo();
            imageCapture();
            break;
            
            
        case ' ':
            imageCapture();
            if (spectrum.playing) {
                spectrum.pause();
                //            ofSoundStreamStop();
                cout << "stop";
            } else {
                spectrum.play();
                //            ofSoundStreamStart();
                cout << "play";
            }
            break;
            
        case 'r':
            playerHead.x1 = ofRandom(ofGetWidth());
            playerHead.x2 = playerHead.x1;
            break;
            
        case 'g':
            bGuiView = !bGuiView;
            break;
            
        default:
            break;
            
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}





//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
    screenWidth = (float)w;
    screenHeight = (float)h;
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo info) {
    
}




//--------------------------------------------------------------
void ofApp::generateShapeFbo(){
    
    shapesFbo.begin();
    
    ofClear(0, 0);
    
    for (int i=0; i<30; i++) {
        for (int j=0; j<10; j++) {
            ofPushMatrix();
            ofSetColor(ofRandom(0, 255));
            ofTranslate(ofRandom(processScreenWidth), ofRandom(processScreenHeight) );
            ofRotateZDeg( ofRandom(-15, 15) );
            ofDrawRectangle( 0, 0, ofRandom(0, 100), ofRandom(0, 5) );
            ofPopMatrix();
        }
    }
    
    shapesFbo.end();
    
    
}

