#include "SpectrumDrawer.h"

int spectrumHeight = 512;


//--------------------------------------------------------------
SpectrumDrawer::SpectrumDrawer(){
    
}


//--------------------------------------------------------------
void SpectrumDrawer::setup(int _minHz, int _maxHz){
    width = 0;
    height = 0;
    minHz = _minHz;
    maxHz = _maxHz;
    player = 0;
    speed = 1;
    ratio = 1;
    offsetX=0;
    offsetY=0;
    playing = false;
    loadedMusicPlaying=false;
    
    //	ofDisableDataPath();
    hertZ.load("din.ttf", 10);
    
    //invert = false;
}



//--------------------------------------------------------------
void SpectrumDrawer::update(){
    
//    ofPushStyle();
//    ofSetColor(10, 10, 10, 120);
//    ofDrawRectangle(0, 0, 1280, spectrumHeight);
//    ofPopStyle();

    if(playing){
//        player += speed;
        player += 0;
    }
    if(height>spectrumHeight){
        ratio = ((float) spectrumHeight)/((float) height);
    }
    
    //	if(invert){
    //		reloadTexture(0);
    //		invert=false;
    //	}
    //	if(square){
    //		reloadTexture(1);
    //		square=false;
    //	}
    
//    if(!loadedMusicPlaying){
//        
//        //kesz spektrumot rajzolunk
//        //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//        glEnable(GL_TEXTURE_2D);
//        glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
//        glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
//        glBindTexture(GL_TEXTURE_2D, texture1);
//        glBegin(GL_QUADS);
//        
//        float ratio = (float)(ofGetWidth())/(float)width;
//        float offXRatio = (player-offsetX)/(float) width;
//        
//        float offYRatio = (offsetY)/(float) width;
//        glTexCoord2f(0.0 + offYRatio, 0.0 + offXRatio);        glVertex3i(0, 0, 0);
//        glTexCoord2f(0.0 + offYRatio, ratio + offXRatio);        glVertex3i(1280, 0, 0);
//        glTexCoord2f(1.0 + offYRatio, ratio + offXRatio);        glVertex3i(1280, spectrumHeight, 0);
//        glTexCoord2f(1.0 + offYRatio, 0.0 + offXRatio);        glVertex3i(0, spectrumHeight, 0);
//        
//        glEnd();
//        glFlush();
//        glDisable(GL_TEXTURE_2D);
//        
//    }else {
//        //keszulo spektrumot rajzolunk
//        glBegin(GL_POINTS);
//        for (int x=0; x<1280; x++) {
//            for (int y=0; y<spectrumHeight; y++) {
//                float c;
//                if (width>1280) {
//                    c = pixels[x+(width-1280)][y];
//                } else {
//                    c = pixels[x][y];
//                }
//                
//                //cout << getPixel(x, y);
//                c/=255.0;
//                c=sqrt(c);
//                //    ofSetColor(ertek, pow(ertek/255.0,3)*255.0, pow(ertek/255.0,5)*255.0,255);
//                
//                glColor3f(c,c,c);
//                glVertex2f(x, y);
//            }
//        }
//        glEnd();
//    }
    
    //hertz table
    
    //	ofEnableAlphaBlending();
    //	ofFill();
    //	ofSetColor(0, 0, 0, 120);
    //	ofRect(10, 10, 60, spectrumHeight);
    //	ofDisableAlphaBlending();
    //	ofSetColor(255, 255, 255);
    //	for (int i=0; i<spectrumHeight/15; i++) {
    //		char* str = new char[30];
    //		sprintf(str, "%.4g", getFreq(i*15+20) );
    //		strcat(str, " Hz");
    //
    //		ofSetColor(255, 255, 255);
    //		hertZ.drawString(str, 10, i*15+20);
    //
    //		ofEnableAlphaBlending();
    //		float until=0;
    //		for (int n=0; n<100; n++) {
    //			until = (100.0*until+500)/101.0;
    //
    //			ofSetColor(255, 255, 255,255-pow(n/100.0,.02)*255.0);
    //			ofSetLineWidth(1);
    //			ofLine(10, i*15+25, until, i*15+25);
    //		}
    //		ofDisableAlphaBlending();
    //	}
    
    if(player==width){
        player=0;
    }
    
}

void SpectrumDrawer::setSize(int _w, int _h){
    //	width=_w;
    //	height=_h;
}

void SpectrumDrawer::setPixel(int x, int y, float r, float g, float b){
    //	pixels[x][y]=(r+g+b)/3.0;
    
}


float SpectrumDrawer::getPixel(int x, int y){
    int _x;
    if(x+player-offsetX<0){
        _x = (width + int(x+player-offsetX))% height;
    }else {
        _x=int(x+player-offsetX)%width;
    }
    
    int _y;
    if(y-offsetY<0){
        _y =(height + int(y-offsetY))% height;
    }else {
        _y=int(y-offsetY) % height;
    }
    float c = pixels[_x][_y]/255.0;
    return c;
}

void SpectrumDrawer::loadImageSpectrum(string target){
    spectrumLoader.clear();
    clear();
    //imageLoaded=false;
    //	ofDisableDataPath();
    spectrumLoader.load(target);
    ratio = (float) spectrumHeight/spectrumLoader.getHeight();
    spectrumLoader.resize(spectrumLoader.getWidth()*ratio, spectrumLoader.getHeight()*ratio);
    
    width = spectrumLoader.getWidth();
    height = spectrumLoader.getHeight();
    
    unsigned char * rawPixels = spectrumLoader.getPixels().getData();
    int r;
    int g;
    int b;
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            r = rawPixels[(i * width + j ) * 3];
            g = rawPixels[(i * width + j ) * 3 + 1];
            b = rawPixels[(i * width + j ) * 3 + 2];
            //pixels[i][j]=value/3;
            //spectrum->setPixel(i, j, r,g,b);
            
            pixels[j][i]=(r+g+b)/3.0;
            image[j][i][0]=(GLubyte) r;
            image[j][i][1]=(GLubyte) g;
            image[j][i][2]=(GLubyte) b;
            
        }
    }
    width = spectrumLoader.getWidth();
    height = spectrumLoader.getHeight();
    
    
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glEnable(GL_TEXTURE_2D);
//    glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
//    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
//    glGenTextures(1, &texture1);
//    glBindTexture(GL_TEXTURE_2D, texture1);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//
//    glTexImage2D (GL_TEXTURE_2D, 0, GL_RGB, height, width, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
//
//    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

}


void SpectrumDrawer::loadImageSpectrum(ofImage _img){
    spectrumCaptureLoader.clear();
    clear();
    //imageLoaded=false;
    //	ofDisableDataPath();
    spectrumCaptureLoader = _img;
    ratio = (float) spectrumHeight/spectrumCaptureLoader.getHeight();
    spectrumCaptureLoader.resize(spectrumCaptureLoader.getWidth()*ratio, spectrumCaptureLoader.getHeight()*ratio);
    
    width = spectrumCaptureLoader.getWidth();
    height = spectrumCaptureLoader.getHeight();
    
    
    unsigned char * rawPixels = spectrumCaptureLoader.getPixels().getData();
    int r;
    int g;
    int b;
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            r = rawPixels[((i) * width + j ) * 3];
            g = rawPixels[((i) * width + j ) * 3 + 1];
            b = rawPixels[((i) * width + j ) * 3 + 2];
            //pixels[i][j]=value/3;
            //spectrum->setPixel(i, j, r,g,b);
            
            pixels[j][i]=(r+g+b)/3.0;
            image[j][i][0]=(GLubyte) r;
            image[j][i][1]=(GLubyte) g;
            image[j][i][2]=(GLubyte) b;
            
        }
    }
    
    
    
    width = spectrumCaptureLoader.getWidth();
    height = spectrumCaptureLoader.getHeight();
    
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glEnable(GL_TEXTURE_2D);
//    glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
//    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
//    glGenTextures(1, &texture1);
//    glBindTexture(GL_TEXTURE_2D, texture1);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//
//    glTexImage2D (GL_TEXTURE_2D, 0, GL_RGB, height, width, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
//
//    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

}


//void SpectrumDrawer::reloadTexture(int mode){
//	if(mode==0){
//		//invert
//		for (int i = 0; i < height; i++){
//			for (int j = 0; j < width; j++){
//				for (int o = 0; o < 3; o++) {
//					image[j][i][o]=(255-(float) image[j][i][o]);
//				}
//				pixels[j][i] = 255- pixels[j][i];
//			}
//		}
//	}
//	if(mode==1){
//		//square
//		for (int i = 0; i < height; i++){
//			for (int j = 0; j < width; j++){
//				for (int o = 0; o < 3; o++) {
//					image[j][i][o]=pow((float) image[j][i][o]/255.0,1.2)*255;
//				}
//				pixels[j][i] = pow(pixels[j][i]/255.0,1.2)*255.0;
//
//
//			}
//		}
//	}
//	if(mode==2){
//		for (int i = 0; i < height; i++){
//			for (int j = 0; j < width; j++){
//				for (int o = 0; o < 3; o++) {
//					float k;
//					k=pixels[j][i];
//					k=sqrt(float(k/255.0))*255.0;
//					if (k>255) {
//						k=255;
//					}
//					image[j][i][o]=(GLubyte) k;
//
//				}
//
//			}
//		}
//	}
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glEnable(GL_TEXTURE_2D);
//	glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
//	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//	glTexImage2D (GL_TEXTURE_2D, 0, GL_RGB, height, width, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
//
//    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
//
//}


//void SpectrumDrawer::addSpectrum(float* buffer){
//	counter++;
//	width=counter;
//	float ratio = maxHz/2/spectrumHeight;
//	for(int i=0;i<spectrumHeight;i++){
//
//		//		double ertek=pow((double) buffer[i],.3)*300.0;
//		//		ofSetColor(ertek, pow(ertek/255.0,3)*255.0, pow(ertek/255.0,5)*255.0,255);
//		//		cout << int((float)i/8192.0*spectrumHeight);
//
//		float ertek = buffer[int((float)i*ratio)]*255.0*8;
//		if(ertek>255){
//			ertek = 255;
//		}
//		pixels[counter][spectrumHeight-i]= ertek;
//	}
//	//cout << int((float)512*ratio)<<endl;
//}

void SpectrumDrawer::play(){
    //	if( playing ){
    //		playing = false;
    //	}else{
    playing = true;
    //	}
}

void SpectrumDrawer::pause(){
    playing = false;
}

void SpectrumDrawer::stop(){
    playing = false;
    player = 0;
}

float SpectrumDrawer::getAmp(float x, float y){
    float amp=0;
    if(height>0){
        x=x-0;
        y=y-0;
        
        amp = getPixel(x, y);
        
    }
    return amp;
}
float SpectrumDrawer::getFreq(float y){
    float freq=0;
    
    if(height>0){
        y-=0;
        float yToFreq = (y/spectrumHeight)*maxHz;
        
        //TODO logarithmic scale
        freq = 1-(log(yToFreq)-log(minHz)) / (log(maxHz)-log(minHz));
        freq *= maxHz;
        //freq = 1-(yToFreq-minHz) / (maxHz-minHz);
        //freq= (spectrumHeight-y+minHz)/spectrumHeight*(maxHz-minHz);
    }
    return freq;
}
void SpectrumDrawer::clear(){
    for (int i=0; i<width; i++) {
        for (int n=0; n<height; n++) {
            pixels[i][n]=0;
        }
    }
}
