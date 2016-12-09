/// a simple example

#include "tubePrimitiveExample.h"

//--------------------------------------------------------------
void ofApp::setup(){

    testFbo.allocate(ofGetWidth(), ofGetHeight());
    sphere.set(200,20);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    testLine.clear();
    testLine.addVertex(0,0,0);
    testLine.quadBezierTo(ofPoint(0,0,10), ofPoint(100,200,0), ofPoint(200,300,100));
    testLine.addVertex(ofPoint(200,300,100));
 
    testTube.setup(testLine, 5);
    testTube.setResolution(5);
    
    testTube.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    

    ofClear(200,0);
    cam.begin();
    
    ofSetColor(0,0,255);
    //sphere.drawWireframe();
    ofPushMatrix();
    ofTranslate(-200,0,0);
    testLine.draw();
    ofPopMatrix();
    
    
    ofPushMatrix();
    testTube.drawNormals(20);
    
    ofTranslate(100,0,0);
    testTube.drawTubeTangents(20);
    
    ofTranslate(100,0,0);
    testTube.drawTubeSkeleton();
    
    ofTranslate(100,0,0);
    testTube.drawTubeRings();
    
    ofPopMatrix();
    
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
