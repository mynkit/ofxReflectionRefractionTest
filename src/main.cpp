#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
//	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
//	ofRunApp(new ofApp());
    
    
    
    ofGLWindowSettings s;
    s.setGLVersion(3, 2);
    s.setSize(1366, 768);
    ofCreateWindow(s);
    ofRunApp( new ofApp() );

}
