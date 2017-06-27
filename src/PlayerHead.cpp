#include "PlayerHead.h"

//--------------------------------------------------------------
PlayerHead::PlayerHead(){
	cout << "hello";
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 512;

	dragging1=false;
	dragging2=false;
}


//--------------------------------------------------------------
void PlayerHead::drawPlayHead(){

    ofPushStyle();
	ofSetColor(255, 255, 255, 120);
//	ofCircle(x1, y1, 3);
//	ofCircle(x2, y2, 3);
	ofDrawLine(x1, y1, x2, y2);
    ofPopStyle();

}

//--------------------------------------------------------------
void PlayerHead::mouseMoved(int x, int y) {
	//cout << "hello";
}



//--------------------------------------------------------------
void PlayerHead::mousePressed(int x, int y, int button) {
	//if(e.x>x-10 and e.x<x+10){
	//	dragging = true;
	//}

	if(distance(x,x1,y,y1)<0){
		dragging1 = true;
	}
	if(distance(x,x2,y,y2)<0){
		dragging2 = true;
	}
}



//--------------------------------------------------------------
void PlayerHead::mouseDragged(int x, int y, int button) {
	if(dragging1){
		if(x<0){
			x1 = fmax(x, 0);
		}else {
			x1 = fmin(x, 1280);
		}

		if (y<0) {
			y1 = fmax(y, 0);
		}else {
			y1 = fmin(y, 512);
		}
	}
	if(dragging2){
		if(x<0){
			x2 = fmax(x, 0);
		}else {
			x2 = fmin(x, 1280);
		}

		if (y<0) {
			y2 = fmax(y, 0);
		}else {
			y2 = fmin(y, 512);
		}
	}
}



//--------------------------------------------------------------
vector< pair <float,float > > PlayerHead::getPoints(int bit){
	vector< pair <float,float > > tomb;
	for (int i = 0; i<bit; i++) {
		pair <float,float > point;
		float _X = (float)(x2-x1)/(float)bit * (float)i;

		float _Y = (float)(y2-y1)/(float)bit * (float)i;

		_X += x1;
		_Y += y1;
		point.first = _X;
		point.second = _Y;
		tomb.push_back(point);
	}
	return tomb;
}



//--------------------------------------------------------------
int fmax (int a,int b){
	if(a>=b){
		return a;
	}else {
		return b;
	}
}

//--------------------------------------------------------------
int fmin (int a,int b){
	if(a>=b){
		return b;
	}else {
		return a;
	}
}

int PlayerHead::distance(int _x1, int _x2, int _y1, int _y2){
	return sqrt(pow(_x2-_x1,2.0) + pow(_y2-_y1,2.0));
}

void PlayerHead::mouseReleased(int x, int y, int button) {
	if(dragging1){
		dragging1 = false;
	}
	if(dragging2){
		dragging2 = false;
	}
}
