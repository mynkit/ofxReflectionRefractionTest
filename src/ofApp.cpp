#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);


    box   = ofMesh::box(100,20,100,1,1,1);
    ofImage px("cubemap2/posx.jpg"); pos.push_back(px);
    ofImage py("cubemap2/posy.jpg"); pos.push_back(py);
    ofImage pz("cubemap2/posz.jpg"); pos.push_back(pz);
    ofImage nx("cubemap2/negx.jpg"); neg.push_back(nx);
    ofImage ny("cubemap2/negy.jpg"); neg.push_back(ny);
    ofImage nz("cubemap2/negz.jpg"); neg.push_back(nz);

    ofxReflectionRefraction r1;
    r1.setup(box,pos,neg,true);
    Ref.push_back(r1);
    ofxReflectionRefraction r2;
    r2.setup(box,pos,neg,false);
    Ref.push_back(r2);
    ofxReflectionRefraction r3;
    r3.setup(box,pos,neg,false);
    Ref.push_back(r3);
    ofxReflectionRefraction r4;
    r4.setup(box,pos,neg,false);
    Ref.push_back(r4);
    ofxReflectionRefraction r5;
    r5.setup(box,pos,neg,false);
    Ref.push_back(r5);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor(160),ofColor(0));

    cam.begin();
    ofEnableDepthTest();
    glEnable(GL_CULL_FACE);

    Ref[0].drawBackground(cam);

    int vibrationRange = 10;
    Ref[0].drawMeshGlass(cam,ofVec3f(ofRandom(-vibrationRange, vibrationRange),0,ofRandom(-vibrationRange, vibrationRange)));
    Ref[1].drawMeshGlass(cam,ofVec3f(ofRandom(-vibrationRange, vibrationRange),20,ofRandom(-vibrationRange, vibrationRange)));
    Ref[2].drawMeshGlass(cam,ofVec3f(ofRandom(-vibrationRange, vibrationRange),40,ofRandom(-vibrationRange, vibrationRange)));
    Ref[3].drawMeshGlass(cam,ofVec3f(ofRandom(-vibrationRange, vibrationRange),60,ofRandom(-vibrationRange, vibrationRange)));
    Ref[4].drawMeshGlass(cam,ofVec3f(ofRandom(-vibrationRange, vibrationRange),80,ofRandom(-vibrationRange, vibrationRange)));

    glDisable(GL_CULL_FACE);
    ofDisableDepthTest();
    cam.end();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
