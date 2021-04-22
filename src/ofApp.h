#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxReflectionRefraction.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void reload(int num);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        
        ofEasyCam cam;
        vector<ofImage> pos;
        vector<ofImage> neg;
        ofxPanel gui;
        ofParameter<ofVec3f> translate;
        vector<ofxReflectionRefraction> Ref;
        ofMesh sphere;
        ofMesh box;
};
