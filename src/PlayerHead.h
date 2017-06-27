#ifndef PLAYERHEAD
#define PLAYERHEAD

#include "ofMain.h"

class PlayerHead{
public:
	PlayerHead();

	int distance(int _x1, int _x2, int _y1, int _y2);
	float x1,y1;
	float x2,y2;
	
	
	vector< pair <float,float > > getPoints(int bit);
	
	void drawPlayHead();
    void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);

private:
	bool dragging1;
	bool dragging2;
};
#endif